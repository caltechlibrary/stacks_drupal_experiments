<?php
/**
 * @file
 * caltechlibrary_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function caltechlibrary_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = 'Placement of Search Note.';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'multisearch*' => 'multisearch*',
        'eds*' => 'eds*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Placement of Search Note.');
  t('Search');
  $export['search'] = $context;

  return $export;
}
