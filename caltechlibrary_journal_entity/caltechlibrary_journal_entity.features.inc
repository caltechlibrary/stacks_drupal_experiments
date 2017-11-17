<?php
/**
 * @file
 * caltechlibrary_journal_entity.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function caltechlibrary_journal_entity_eck_bundle_info() {
  $items = array(
    'journal_journal' => array(
      'machine_name' => 'journal_journal',
      'entity_type' => 'journal',
      'name' => 'journal',
      'label' => 'Journal',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function caltechlibrary_journal_entity_eck_entity_type_info() {
  $items = array(
    'journal' => array(
      'name' => 'journal',
      'label' => 'Journal',
      'properties' => array(
        'unique_id' => array(
          'label' => 'UniqueID',
          'type' => 'text',
          'behavior' => '',
        ),
        'kbid' => array(
          'label' => 'KBID',
          'type' => 'text',
          'behavior' => '',
        ),
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'title_alternate' => array(
          'label' => 'AlternateTitle',
          'type' => 'bigtext',
          'behavior' => '',
        ),
        'platform' => array(
          'label' => 'Platform',
          'type' => 'text',
          'behavior' => '',
        ),
        'package' => array(
          'label' => 'PackageName',
          'type' => 'text',
          'behavior' => '',
        ),
        'url' => array(
          'label' => 'URL',
          'type' => 'bigtext',
          'behavior' => '',
        ),
        'publisher' => array(
          'label' => 'Publisher',
          'type' => 'text',
          'behavior' => '',
        ),
        'sn_print' => array(
          'label' => 'PrintSN',
          'type' => 'text',
          'behavior' => '',
        ),
        'sn_online' => array(
          'label' => 'OnlineSN',
          'type' => 'text',
          'behavior' => '',
        ),
        'coverage_begin' => array(
          'label' => 'CoverageBegin',
          'type' => 'text',
          'behavior' => '',
        ),
        'coverage_end' => array(
          'label' => 'CoverageEnd',
          'type' => 'text',
          'behavior' => '',
        ),
        'coverage_note' => array(
          'label' => 'CoverageNote',
          'type' => 'text',
          'behavior' => '',
        ),
        'description' => array(
          'label' => 'Description',
          'type' => 'bigtext',
          'behavior' => '',
        ),
        'keywords' => array(
          'label' => 'Keywords',
          'type' => 'bigtext',
          'behavior' => '',
        ),
      ),
    ),
  );
  return $items;
}
