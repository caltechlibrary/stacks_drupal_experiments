<?php
/**
 * @file
 * caltechlibrary_software.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function caltechlibrary_software_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'software';
  $view->description = '';
  $view->tag = 'caltechlibrary';
  $view->base_table = 'node';
  $view->human_name = 'Software';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Software';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Entity: Rendered entity */
  $handler->display->display_options['header']['entity']['id'] = 'entity';
  $handler->display->display_options['header']['entity']['table'] = 'entity__global';
  $handler->display->display_options['header']['entity']['field'] = 'entity';
  $handler->display->display_options['header']['entity']['empty'] = TRUE;
  $handler->display->display_options['header']['entity']['entity_id'] = '2531';
  $handler->display->display_options['header']['entity']['bypass_access'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'body',
    1 => 'field_software_category',
    2 => 'field_software_computers',
    3 => 'field_software_locations',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsible'] = 1;
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsed'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_software_category']['id'] = 'field_software_category';
  $handler->display->display_options['fields']['field_software_category']['table'] = 'field_data_field_software_category';
  $handler->display->display_options['fields']['field_software_category']['field'] = 'field_software_category';
  $handler->display->display_options['fields']['field_software_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_software_category']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_software_category']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_software_category']['delta_offset'] = '0';
  /* Field: Content: Computers */
  $handler->display->display_options['fields']['field_software_computers']['id'] = 'field_software_computers';
  $handler->display->display_options['fields']['field_software_computers']['table'] = 'field_data_field_software_computers';
  $handler->display->display_options['fields']['field_software_computers']['field'] = 'field_software_computers';
  $handler->display->display_options['fields']['field_software_computers']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_software_computers']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_software_computers']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_software_computers']['delta_offset'] = '0';
  /* Field: Content: Locations */
  $handler->display->display_options['fields']['field_software_locations']['id'] = 'field_software_locations';
  $handler->display->display_options['fields']['field_software_locations']['table'] = 'field_data_field_software_locations';
  $handler->display->display_options['fields']['field_software_locations']['field'] = 'field_software_locations';
  $handler->display->display_options['fields']['field_software_locations']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_software_locations']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_software_locations']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_software_locations']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'software' => 'software',
  );
  /* Filter criterion: Content: Category (field_software_category) */
  $handler->display->display_options['filters']['field_software_category_tid']['id'] = 'field_software_category_tid';
  $handler->display->display_options['filters']['field_software_category_tid']['table'] = 'field_data_field_software_category';
  $handler->display->display_options['filters']['field_software_category_tid']['field'] = 'field_software_category_tid';
  $handler->display->display_options['filters']['field_software_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_software_category_tid']['expose']['operator_id'] = 'field_software_category_tid_op';
  $handler->display->display_options['filters']['field_software_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_software_category_tid']['expose']['operator'] = 'field_software_category_tid_op';
  $handler->display->display_options['filters']['field_software_category_tid']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_software_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    86 => 0,
    87 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_software_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_software_category_tid']['vocabulary'] = 'software_categories';
  /* Filter criterion: Content: Computers (field_software_computers) */
  $handler->display->display_options['filters']['field_software_computers_tid']['id'] = 'field_software_computers_tid';
  $handler->display->display_options['filters']['field_software_computers_tid']['table'] = 'field_data_field_software_computers';
  $handler->display->display_options['filters']['field_software_computers_tid']['field'] = 'field_software_computers_tid';
  $handler->display->display_options['filters']['field_software_computers_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_software_computers_tid']['expose']['operator_id'] = 'field_software_computers_tid_op';
  $handler->display->display_options['filters']['field_software_computers_tid']['expose']['label'] = 'Computers';
  $handler->display->display_options['filters']['field_software_computers_tid']['expose']['operator'] = 'field_software_computers_tid_op';
  $handler->display->display_options['filters']['field_software_computers_tid']['expose']['identifier'] = 'computers';
  $handler->display->display_options['filters']['field_software_computers_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    86 => 0,
    87 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_software_computers_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_software_computers_tid']['vocabulary'] = 'software_computers';
  /* Filter criterion: Content: Locations (field_software_locations) */
  $handler->display->display_options['filters']['field_software_locations_tid']['id'] = 'field_software_locations_tid';
  $handler->display->display_options['filters']['field_software_locations_tid']['table'] = 'field_data_field_software_locations';
  $handler->display->display_options['filters']['field_software_locations_tid']['field'] = 'field_software_locations_tid';
  $handler->display->display_options['filters']['field_software_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_software_locations_tid']['expose']['operator_id'] = 'field_software_locations_tid_op';
  $handler->display->display_options['filters']['field_software_locations_tid']['expose']['label'] = 'Locations';
  $handler->display->display_options['filters']['field_software_locations_tid']['expose']['operator'] = 'field_software_locations_tid_op';
  $handler->display->display_options['filters']['field_software_locations_tid']['expose']['identifier'] = 'locations';
  $handler->display->display_options['filters']['field_software_locations_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    86 => 0,
    87 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_software_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_software_locations_tid']['vocabulary'] = 'software_locations';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'software';
  $export['software'] = $view;

  return $export;
}
