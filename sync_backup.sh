#!/bin/bash
# exec 2>/dev/null

drush bam-backup

latest=`ls -t /var/www/stacks/sites/default/files/private/backup_migrate/manual/www.library.caltech.edu-* | head -1`
# echo "latest backup: $latest"

# find the first instance and then the "second" word (there is a leading space)
# latest=`drush bam-backups | grep -m 1 "caltech" | cut -d " " -f2`

echo "Dropping all tables..."
drush sql-drop --yes
echo "Tables dropped..."

filename=`basename $latest`
echo "Restoring database from $filename file..."
drush sql-query --file=$latest
# drush bam-restore -y db manual $latest
echo "Database restored..."

drush pm-disable -y redis

drush pm-enable -y dblog devel environment_indicator search_api_db stage_file_proxy

drush pm-enable -y \
  # caltechlibrary_editor \
  # caltechlibrary_landing \
  # caltechlibrary_locations \
  # caltechlibrary_media \
  # caltechlibrary_search \
  # caltechlibrary_search_test \
  # caltechlibrary_software \

drush role-add-perm 'super administrator' "\
  access devel information,\
  execute php code,\
  switch users,\
  administer environment indicator settings,\
  access environment indicator,\
  administer features,\
  manage features,\
  generate features,\
  rename features"
