<?php
/**
 * @file
 * caltechlibrary_locations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caltechlibrary_locations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function caltechlibrary_locations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
