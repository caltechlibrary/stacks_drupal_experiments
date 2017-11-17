<?php
/**
 * @file
 * caltechlibrary_locations.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function caltechlibrary_locations_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6f7bd4be-b64c-4288-9f5e-c5f0c438452e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Locations',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'library_branch' => 'library_branch',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a2238e23-a7dd-4576-965d-681ccb4438bb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_6f7bd4be-b64c-4288-9f5e-c5f0c438452e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-570d836c-41d8-4925-89a6-f729ba74130b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-hours_locations-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '570d836c-41d8-4925-89a6-f729ba74130b';
  $display->content['new-570d836c-41d8-4925-89a6-f729ba74130b'] = $pane;
  $display->panels['middle'][0] = 'new-570d836c-41d8-4925-89a6-f729ba74130b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6f7bd4be-b64c-4288-9f5e-c5f0c438452e'] = $handler;

  return $export;
}
