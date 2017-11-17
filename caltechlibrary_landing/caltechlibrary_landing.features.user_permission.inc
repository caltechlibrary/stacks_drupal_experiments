<?php
/**
 * @file
 * caltechlibrary_landing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function caltechlibrary_landing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer menu-landing menu items'.
  $permissions['administer menu-landing menu items'] = array(
    'name' => 'administer menu-landing menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  return $permissions;
}
