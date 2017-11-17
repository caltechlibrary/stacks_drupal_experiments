<?php
/**
 * @file
 * caltechlibrary_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function caltechlibrary_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'demo administrator' => 'demo administrator',
      'search app administrator' => 'search app administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
