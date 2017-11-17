<?php
/**
 * @file
 * caltechlibrary_front_panel.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function caltechlibrary_front_panel_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'quicktabs, connect with us, resource slider';
  $context->tag = 'Frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  t('quicktabs, connect with us, resource slider');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slider_frontpages';
  $context->description = 'Places sliders on all Home pages';
  $context->tag = 'Sliders';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places sliders on all Home pages');
  t('Sliders');
  $export['slider_frontpages'] = $context;

  return $export;
}
