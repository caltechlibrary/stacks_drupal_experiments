#!/usr/bin/env bash

# parse list of available backups
# get latest production backup filename
#


# set login cookie
# curl \
#   -c /tmp/cookie.txt \
#   -d "name=USERNAME" \
#   -d "pass=PASSWORD" \
#   -d "form_id=user_login" \
#   -d "op=Log in" \
#   https://www.library.caltech.edu/user/login

# download file with cookie
# /admin/config/system/backup_migrate/settings/destination/downloadfile/nodesquirrel/www.library.caltech.edu-2017-06-06T08-58-53.mysql.gz

# curl \
# -b /tmp/cookie.txt \
# -o /var/www/stacks/sites/default/files/private/backup_migrate/manual/***FILENAME*** \
# https://www.library.caltech.edu/admin/config/system/backup_migrate/settings/destination/downloadfile/nodesquirrel/***FILENAME***
