<?php
/**
 * @file
 * caltechlibrary_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caltechlibrary_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
