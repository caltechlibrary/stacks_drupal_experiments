<?php
/**
 * @file
 * caltechlibrary_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caltechlibrary_editor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
