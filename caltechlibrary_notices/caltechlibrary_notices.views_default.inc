<?php
/**
 * @file
 * caltechlibrary_notices.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function caltechlibrary_notices_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'notices';
  $view->description = 'Displays notice content on the front panel.';
  $view->tag = 'caltechlibrary';
  $view->base_table = 'node';
  $view->human_name = 'Notices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current Notices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'notice [field_notice_severity]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Notice */
  $handler->display->display_options['fields']['field_notice_notice']['id'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['table'] = 'field_data_field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['field'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['label'] = '';
  $handler->display->display_options['fields']['field_notice_notice']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_notice_notice']['alter']['preserve_tags'] = '<a> <b> <em> <i> <strong>';
  $handler->display->display_options['fields']['field_notice_notice']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notice_notice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: More Information Link */
  $handler->display->display_options['fields']['field_notice_link']['id'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['table'] = 'field_data_field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['field'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['label'] = '';
  $handler->display->display_options['fields']['field_notice_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_notice_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_notice_active']['id'] = 'field_notice_active';
  $handler->display->display_options['fields']['field_notice_active']['table'] = 'field_data_field_notice_active';
  $handler->display->display_options['fields']['field_notice_active']['field'] = 'field_notice_active';
  $handler->display->display_options['fields']['field_notice_active']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_notice_active']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_notice_active']['element_wrapper_class'] = 'label secondary';
  $handler->display->display_options['fields']['field_notice_active']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Severity */
  $handler->display->display_options['fields']['field_notice_severity']['id'] = 'field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['table'] = 'field_data_field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['field'] = 'field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_notice_severity']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_notice_severity']['element_wrapper_class'] = 'label secondary';
  $handler->display->display_options['fields']['field_notice_severity']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Display Dates */
  $handler->display->display_options['fields']['field_notice_dates']['id'] = 'field_notice_dates';
  $handler->display->display_options['fields']['field_notice_dates']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['fields']['field_notice_dates']['field'] = 'field_notice_dates';
  $handler->display->display_options['fields']['field_notice_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_notice_dates']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_notice_dates']['element_wrapper_class'] = 'label secondary';
  $handler->display->display_options['fields']['field_notice_dates']['settings'] = array(
    'format_type' => 'iso_8601_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'field_formatter_class' => '',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'OR',
    2 => 'OR',
  );
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
    'notice' => 'notice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Active (field_notice_active) */
  $handler->display->display_options['filters']['field_notice_active_value']['id'] = 'field_notice_active_value';
  $handler->display->display_options['filters']['field_notice_active_value']['table'] = 'field_data_field_notice_active';
  $handler->display->display_options['filters']['field_notice_active_value']['field'] = 'field_notice_active_value';
  $handler->display->display_options['filters']['field_notice_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_notice_active_value']['group'] = 1;
  /* Filter criterion: Content: Display Dates -  start date (field_notice_dates) */
  $handler->display->display_options['filters']['field_notice_dates_value']['id'] = 'field_notice_dates_value';
  $handler->display->display_options['filters']['field_notice_dates_value']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['filters']['field_notice_dates_value']['field'] = 'field_notice_dates_value';
  $handler->display->display_options['filters']['field_notice_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_notice_dates_value']['group'] = 2;
  $handler->display->display_options['filters']['field_notice_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Display Dates -  start date (field_notice_dates) */
  $handler->display->display_options['filters']['field_notice_dates_value_1']['id'] = 'field_notice_dates_value_1';
  $handler->display->display_options['filters']['field_notice_dates_value_1']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['filters']['field_notice_dates_value_1']['field'] = 'field_notice_dates_value';
  $handler->display->display_options['filters']['field_notice_dates_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_notice_dates_value_1']['group'] = 2;
  /* Filter criterion: Content: Display Dates - end date (field_notice_dates:value2) */
  $handler->display->display_options['filters']['field_notice_dates_value2']['id'] = 'field_notice_dates_value2';
  $handler->display->display_options['filters']['field_notice_dates_value2']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['filters']['field_notice_dates_value2']['field'] = 'field_notice_dates_value2';
  $handler->display->display_options['filters']['field_notice_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_notice_dates_value2']['group'] = 3;
  $handler->display->display_options['filters']['field_notice_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Display Dates - end date (field_notice_dates:value2) */
  $handler->display->display_options['filters']['field_notice_dates_value2_1']['id'] = 'field_notice_dates_value2_1';
  $handler->display->display_options['filters']['field_notice_dates_value2_1']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['filters']['field_notice_dates_value2_1']['field'] = 'field_notice_dates_value2';
  $handler->display->display_options['filters']['field_notice_dates_value2_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_notice_dates_value2_1']['group'] = 3;

  /* Display: Manage */
  $handler = $view->new_display('page', 'Manage', 'manage');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any notice content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_notice_notice' => 'field_notice_notice',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'field_notice_active' => 'field_notice_active',
    'field_notice_dates' => 'field_notice_dates',
    'field_notice_link' => 'field_notice_link',
    'field_notice_severity' => 'field_notice_severity',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_notice_notice' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notice_active' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notice_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notice_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notice_severity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: + Add Notice */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = '+ Add Notice';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links">
  <li><a href="/node/add/notice" class="waves-effect waves-button waves-float waves-classic">+ Add Notice</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: + Add Notice */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = '+ Add Notice';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no notices at this time. <a href="/node/add/notice">+ Add Notice</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Notice */
  $handler->display->display_options['fields']['field_notice_notice']['id'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['table'] = 'field_data_field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['field'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notice_notice']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_notice_active']['id'] = 'field_notice_active';
  $handler->display->display_options['fields']['field_notice_active']['table'] = 'field_data_field_notice_active';
  $handler->display->display_options['fields']['field_notice_active']['field'] = 'field_notice_active';
  $handler->display->display_options['fields']['field_notice_active']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Display Dates */
  $handler->display->display_options['fields']['field_notice_dates']['id'] = 'field_notice_dates';
  $handler->display->display_options['fields']['field_notice_dates']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['fields']['field_notice_dates']['field'] = 'field_notice_dates';
  $handler->display->display_options['fields']['field_notice_dates']['settings'] = array(
    'format_type' => 'iso_8601_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
    'field_formatter_class' => '',
  );
  /* Field: Content: More Information Link */
  $handler->display->display_options['fields']['field_notice_link']['id'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['table'] = 'field_data_field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['field'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_notice_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_notice_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Severity */
  $handler->display->display_options['fields']['field_notice_severity']['id'] = 'field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['table'] = 'field_data_field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['field'] = 'field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notice' => 'notice',
  );
  $handler->display->display_options['path'] = 'admin/content/notices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Notices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content Pane */
  $handler = $view->new_display('panel_pane', 'Content Pane', 'panel_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'label secondary edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit notice';
  /* Field: Content: Severity */
  $handler->display->display_options['fields']['field_notice_severity']['id'] = 'field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['table'] = 'field_data_field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['field'] = 'field_notice_severity';
  $handler->display->display_options['fields']['field_notice_severity']['label'] = '';
  $handler->display->display_options['fields']['field_notice_severity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_notice_severity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_severity']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_notice_severity']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Notice */
  $handler->display->display_options['fields']['field_notice_notice']['id'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['table'] = 'field_data_field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['field'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['label'] = '';
  $handler->display->display_options['fields']['field_notice_notice']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_notice_notice']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_notice_notice']['alter']['preserve_tags'] = '<a> <b> <em> <i> <strong>';
  $handler->display->display_options['fields']['field_notice_notice']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notice_notice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_notice_notice']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: More Information Link */
  $handler->display->display_options['fields']['field_notice_link']['id'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['table'] = 'field_data_field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['field'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['label'] = '';
  $handler->display->display_options['fields']['field_notice_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notice_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_notice_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notice_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_notice_link']['settings'] = array(
    'field_formatter_class' => '',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'notices';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Caltech Library Notices';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['link_url'] = '/home';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Current notices from the Caltech Library.';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'nid';
  $handler->display->display_options['row_options']['description_field'] = 'nothing';
  $handler->display->display_options['row_options']['creator_field'] = 'nothing_1';
  $handler->display->display_options['row_options']['date_field'] = 'changed';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Notice */
  $handler->display->display_options['fields']['field_notice_notice']['id'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['table'] = 'field_data_field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['field'] = 'field_notice_notice';
  $handler->display->display_options['fields']['field_notice_notice']['label'] = '';
  $handler->display->display_options['fields']['field_notice_notice']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_notice_notice']['alter']['preserve_tags'] = '<a> <b> <em> <i> <strong>';
  $handler->display->display_options['fields']['field_notice_notice']['element_type'] = '0';
  $handler->display->display_options['fields']['field_notice_notice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_notice_notice']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: More Information Link */
  $handler->display->display_options['fields']['field_notice_link']['id'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['table'] = 'field_data_field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['field'] = 'field_notice_link';
  $handler->display->display_options['fields']['field_notice_link']['label'] = '';
  $handler->display->display_options['fields']['field_notice_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notice_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_notice_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_notice_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: Description: Notice + More Information Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Description: Notice + More Information Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_notice_notice] [field_notice_link]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Creator: Caltech Library */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Creator: Caltech Library';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Caltech Library';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Permalink */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Permalink';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'notice' => 'notice',
  );
  /* Filter criterion: Content: Active (field_notice_active) */
  $handler->display->display_options['filters']['field_notice_active_value']['id'] = 'field_notice_active_value';
  $handler->display->display_options['filters']['field_notice_active_value']['table'] = 'field_data_field_notice_active';
  $handler->display->display_options['filters']['field_notice_active_value']['field'] = 'field_notice_active_value';
  $handler->display->display_options['filters']['field_notice_active_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Display Dates -  start date (field_notice_dates) */
  $handler->display->display_options['filters']['field_notice_dates_value']['id'] = 'field_notice_dates_value';
  $handler->display->display_options['filters']['field_notice_dates_value']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['filters']['field_notice_dates_value']['field'] = 'field_notice_dates_value';
  $handler->display->display_options['filters']['field_notice_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_notice_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Display Dates - end date (field_notice_dates:value2) */
  $handler->display->display_options['filters']['field_notice_dates_value2']['id'] = 'field_notice_dates_value2';
  $handler->display->display_options['filters']['field_notice_dates_value2']['table'] = 'field_data_field_notice_dates';
  $handler->display->display_options['filters']['field_notice_dates_value2']['field'] = 'field_notice_dates_value2';
  $handler->display->display_options['filters']['field_notice_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_notice_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'notices.xml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['notices'] = $view;

  return $export;
}
