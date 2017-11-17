<?php
/**
 * @file
 * caltechlibrary_landing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function caltechlibrary_landing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing';
  $context->description = '';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'authoring-and-publishing' => 'authoring-and-publishing',
        'tools-and-technology' => 'tools-and-technology',
        'caltech-research-online' => 'caltech-research-online',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  $export['landing'] = $context;

  return $export;
}
