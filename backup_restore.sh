#!/usr/bin/env bash

# display message when no arguments are given
if [ $# == 0 ]; then
  echo "The caltech-developer environment will not be synced with master before dumping the database without adding the --sync flag."
fi

# backup current vm database
drush @_local bam-backup

# make sure we are using caltech-developer environment
platform checkout caltech-developer

# only while the number of arguments is not equal to zero
while [ ! $# -eq 0 ]
do
  case "$1" in
    # using the `|` character we can use long or short flags
    --sync | -s)
      # sync caltech-developer environment with master
      platform sync -y data
      ;;
  esac
  # move the first argument off the list and continue with the new first one
  shift
done

# dump the caltech-developer database schema
platform db:dump -y --gzip -f /var/www/stacks/dump_schema.sql.gz --schema-only

# dump the caltech-developer database data
platform db:dump -y --gzip -f /var/www/stacks/dump_data.sql.gz \
  --exclude-table cache \
  --exclude-table cache_admin_menu \
  --exclude-table cache_block \
  --exclude-table cache_bootstrap \
  --exclude-table cache_features \
  --exclude-table cache_feeds_http \
  --exclude-table cache_field \
  --exclude-table cache_filter \
  --exclude-table cache_form \
  --exclude-table cache_image \
  --exclude-table cache_libraries \
  --exclude-table cache_menu \
  --exclude-table cache_page \
  --exclude-table cache_panels \
  --exclude-table cache_path \
  --exclude-table cache_path_breadcrumbs \
  --exclude-table cache_rules \
  --exclude-table cache_search_api_solr \
  --exclude-table cache_token \
  --exclude-table cache_views \
  --exclude-table cache_views_data \
  --exclude-table watchdog

# drop existing vm database tables
echo "Dropping all tables..."
drush @_local sql-drop --yes
echo "Tables dropped..."

# restore the database schema to the vm
echo "Restoring database schema..."
drush @_local sql-query -v --file=/var/www/stacks/dump_schema.sql.gz
echo "Database schema restored..."
rm /var/www/stacks/dump_schema.sql

# restore the database data to the vm
echo "Restoring database data..."
drush @_local sql-query -v --file=/var/www/stacks/dump_data.sql.gz
echo "Database data restored..."
rm /var/www/stacks/dump_data.sql

drush @_local pm-disable -y redis

drush @_local pm-enable -y \
  caltechlibrary_vm_solr \
  dblog \
  devel \
  environment_indicator \
  stage_file_proxy

drush @_local features-revert -y caltechlibrary_vm_solr

drush @_local search-api-clear directorylisting
drush @_local search-api-index directorylisting

drush @_local role-add-perm 'super administrator' "\
  feed import,\
  feed import process,\
  access devel information,\
  execute php code,\
  switch users,\
  administer environment indicator settings,\
  access environment indicator,\
  administer features,\
  manage features,\
  generate features,\
  rename features"

# testing journals a–z list
drush @_local pm-enable -y \
  feed_import_base \
  feed_import \
  caltechlibrary_feed_import \
  caltechlibrary_journal \
  caltechlibrary_journals_index \
  caltechlibrary_journals_view \

drush @_local search-api-index caltechlibrary_journals

drush @_local role-add-perm 'super administrator' "\
  feed import,\
  feed import process"
