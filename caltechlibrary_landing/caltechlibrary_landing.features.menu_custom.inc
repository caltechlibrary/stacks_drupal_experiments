<?php
/**
 * @file
 * caltechlibrary_landing.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function caltechlibrary_landing_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-landing.
  $menus['menu-landing'] = array(
    'menu_name' => 'menu-landing',
    'title' => 'Landing',
    'description' => 'For menu block sidebars on Callout Landing Pages.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('For menu block sidebars on Callout Landing Pages.');
  t('Landing');

  return $menus;
}
