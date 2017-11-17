<?php
/**
 * @file
 * caltechlibrary_front_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caltechlibrary_front_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
