<?php
/**
 * @file
 * caltechlibrary_feed_import.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function caltechlibrary_feed_import_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_delete_items_per_cron';
  $strongarm->value = '300';
  $export['feed_import_delete_items_per_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_filters_dir';
  $strongarm->value = 'sites/all/modules/feed_import/feed_import_base/filters';
  $export['feed_import_filters_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_import_running';
  $strongarm->value = array(
    'journal' => array(),
  );
  $export['feed_import_import_running'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_interval_start';
  $strongarm->value = '00:00';
  $export['feed_import_interval_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_interval_stop';
  $strongarm->value = '24:00';
  $export['feed_import_interval_stop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_invoke_hooks';
  $strongarm->value = 0;
  $export['feed_import_invoke_hooks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_let_overlap';
  $strongarm->value = array(
    'journal' => 'journal',
  );
  $export['feed_import_let_overlap'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_reports';
  $strongarm->value = 1;
  $export['feed_import_reports'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_time_between_imports';
  $strongarm->value = '3600';
  $export['feed_import_time_between_imports'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_time_settings';
  $strongarm->value = '0';
  $export['feed_import_time_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feed_import_use_cron';
  $strongarm->value = 1;
  $export['feed_import_use_cron'] = $strongarm;

  return $export;
}
