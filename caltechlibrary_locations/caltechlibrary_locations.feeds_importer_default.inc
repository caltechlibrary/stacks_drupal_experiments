<?php
/**
 * @file
 * caltechlibrary_locations.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function caltechlibrary_locations_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'libcal_locations';
  $feeds_importer->config = array(
    'name' => 'LibCal Locations',
    'description' => 'Imports hours and geographic data for locations from LibCal.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'use_tidy' => 0,
        'sources' => array(
          'lid' => array(
            'name' => 'lid',
            'value' => 'lid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'name' => array(
            'name' => 'name',
            'value' => 'name',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'fn' => array(
            'name' => 'fn',
            'value' => 'fn',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'lat' => array(
            'name' => 'lat',
            'value' => 'lat',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'long' => array(
            'name' => 'long',
            'value' => 'long',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'sunday' => array(
            'name' => 'Sunday',
            'value' => 'weeks/week/Sunday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'monday' => array(
            'name' => 'Monday',
            'value' => 'weeks/week/Monday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '7',
          ),
          'tuesday' => array(
            'name' => 'Tuesday',
            'value' => 'weeks/week/Tuesday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '8',
          ),
          'wednesday' => array(
            'name' => 'Wednesday',
            'value' => 'weeks/week/Wednesday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '9',
          ),
          'thursday' => array(
            'name' => 'Thursday',
            'value' => 'weeks/week/Thursday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '10',
          ),
          'friday' => array(
            'name' => 'Friday',
            'value' => 'weeks/week/Friday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '11',
          ),
          'saturday' => array(
            'name' => 'Saturday',
            'value' => 'weeks/week/Saturday/rendered',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '12',
          ),
          'desc' => array(
            'name' => 'Description',
            'value' => 'desc',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '13',
          ),
        ),
        'context' => array(
          'value' => '//location',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '191',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'lid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'sunday',
            'target' => 'field_branch_sunday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'monday',
            'target' => 'field_branch_monday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'tuesday',
            'target' => 'field_branch_tuesday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'wednesday',
            'target' => 'field_branch_wednesday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'thursday',
            'target' => 'field_branch_thursday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'friday',
            'target' => 'field_branch_friday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'saturday',
            'target' => 'field_branch_saturday',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'fn',
            'target' => 'field_branch_notes',
            'format' => 'filtered_html',
            'language' => 'und',
          ),
          10 => array(
            'source' => 'lat',
            'target' => 'field_branch_geocode:lat',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'long',
            'target' => 'field_branch_geocode:lon',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'library_branch',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['libcal_locations'] = $feeds_importer;

  return $export;
}
