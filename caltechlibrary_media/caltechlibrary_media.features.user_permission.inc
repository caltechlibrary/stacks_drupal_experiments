<?php
/**
 * @file
 * caltechlibrary_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function caltechlibrary_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'moderator' => 'moderator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'moderator' => 'moderator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'media_wysiwyg',
  );

  return $permissions;
}
