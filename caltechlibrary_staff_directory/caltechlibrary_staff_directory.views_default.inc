<?php
/**
 * @file
 * caltechlibrary_staff_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function caltechlibrary_staff_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'directory';
  $view->description = '';
  $view->tag = 'caltechlibrary';
  $view->base_table = 'node';
  $view->human_name = 'Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_directory_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'block-grid-list medium-block-grid-2';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Department (field_directory_department) */
  $handler->display->display_options['relationships']['field_directory_department_tid']['id'] = 'field_directory_department_tid';
  $handler->display->display_options['relationships']['field_directory_department_tid']['table'] = 'field_data_field_directory_department';
  $handler->display->display_options['relationships']['field_directory_department_tid']['field'] = 'field_directory_department_tid';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_directory_department']['id'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['table'] = 'field_data_field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['field'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['label'] = '';
  $handler->display->display_options['fields']['field_directory_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directory_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directory_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_directory_department']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Picture Wrapper';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_picture',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'large-6 columns';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_type'] = '0';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'headshot',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Text Wrapper';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'title',
    1 => 'field_job_title_listing',
    2 => 'field_email',
    3 => 'field_phone_number_listing',
    4 => 'field_directory_location',
    5 => 'body',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'large-6 columns';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title_listing']['id'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['table'] = 'field_data_field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['field'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['label'] = '';
  $handler->display->display_options['fields']['field_job_title_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_job_title_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title_listing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_job_title_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number_listing']['id'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['table'] = 'field_data_field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['field'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number_listing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number_listing']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone_number_listing']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone_number_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_directory_location']['id'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['table'] = 'field_data_field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['field'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['label'] = 'Office Location';
  $handler->display->display_options['fields']['field_directory_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_directory_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_directory_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_directory_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Directory Listing';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'field_directory_department_tid';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'directory:sort';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'directory_listing' => 'directory_listing',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    86 => 0,
    87 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Department (field_directory_department) */
  $handler->display->display_options['filters']['field_directory_department_tid']['id'] = 'field_directory_department_tid';
  $handler->display->display_options['filters']['field_directory_department_tid']['table'] = 'field_data_field_directory_department';
  $handler->display->display_options['filters']['field_directory_department_tid']['field'] = 'field_directory_department_tid';
  $handler->display->display_options['filters']['field_directory_department_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_directory_department_tid']['expose']['operator_id'] = 'field_directory_department_tid_op';
  $handler->display->display_options['filters']['field_directory_department_tid']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_directory_department_tid']['expose']['operator'] = 'field_directory_department_tid_op';
  $handler->display->display_options['filters']['field_directory_department_tid']['expose']['identifier'] = 'field_directory_department_tid';
  $handler->display->display_options['filters']['field_directory_department_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    86 => 0,
    87 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_directory_department_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_directory_department_tid']['vocabulary'] = 'department';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'directory/departmental';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Departmental';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Directory';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Sort */
  $handler = $view->new_display('page', 'Sort', 'sort');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any directory_listing content';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_directory_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_directory_department' => 'field_directory_department',
    'title' => 'title',
    'field_job_title_listing' => 'field_job_title_listing',
    'field_email' => 'field_email',
    'field_phone_number_listing' => 'field_phone_number_listing',
    'field_directory_location' => 'field_directory_location',
    'body' => 'body',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_directory_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title_listing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_number_listing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_directory_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a class="button" href="/admin/structure/taxonomy/department">Change the order of Departments</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_directory_department']['id'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['table'] = 'field_data_field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['field'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['label'] = '';
  $handler->display->display_options['fields']['field_directory_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directory_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directory_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_directory_department']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title_listing']['id'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['table'] = 'field_data_field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['field'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['label'] = '';
  $handler->display->display_options['fields']['field_job_title_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number_listing']['id'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['table'] = 'field_data_field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['field'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number_listing']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone_number_listing']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone_number_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_directory_location']['id'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['table'] = 'field_data_field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['field'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['path'] = 'admin/content/directory-listings/sort';

  /* Display: Alphabetical */
  $handler = $view->new_display('page', 'Alphabetical', 'alphabetical');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Picture Wrapper';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_picture',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'large-6 columns';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_type'] = '0';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'headshot',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Text Wrapper';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_first_name_listing',
    1 => 'field_last_name_listing',
    2 => 'title',
    3 => 'field_job_title_listing',
    4 => 'field_directory_department',
    5 => 'field_email',
    6 => 'field_phone_number_listing',
    7 => 'field_directory_location',
    8 => 'body',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'large-6 columns';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_first_name_listing']['id'] = 'field_first_name_listing';
  $handler->display->display_options['fields']['field_first_name_listing']['table'] = 'field_data_field_first_name_listing';
  $handler->display->display_options['fields']['field_first_name_listing']['field'] = 'field_first_name_listing';
  $handler->display->display_options['fields']['field_first_name_listing']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Last name/Secondary name */
  $handler->display->display_options['fields']['field_last_name_listing']['id'] = 'field_last_name_listing';
  $handler->display->display_options['fields']['field_last_name_listing']['table'] = 'field_data_field_last_name_listing';
  $handler->display->display_options['fields']['field_last_name_listing']['field'] = 'field_last_name_listing';
  $handler->display->display_options['fields']['field_last_name_listing']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_listing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_last_name_listing], [field_first_name_listing]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_job_title_listing']['id'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['table'] = 'field_data_field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['field'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['label'] = '';
  $handler->display->display_options['fields']['field_job_title_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_job_title_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_directory_department']['id'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['table'] = 'field_data_field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['field'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['label'] = '';
  $handler->display->display_options['fields']['field_directory_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_directory_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directory_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_directory_department']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number_listing']['id'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['table'] = 'field_data_field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['field'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number_listing']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone_number_listing']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone_number_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_directory_location']['id'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['table'] = 'field_data_field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['field'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['label'] = 'Office Location';
  $handler->display->display_options['fields']['field_directory_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_directory_location']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_directory_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Directory Listing';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name/Secondary name (field_last_name_listing) */
  $handler->display->display_options['sorts']['field_last_name_listing_value']['id'] = 'field_last_name_listing_value';
  $handler->display->display_options['sorts']['field_last_name_listing_value']['table'] = 'field_data_field_last_name_listing';
  $handler->display->display_options['sorts']['field_last_name_listing_value']['field'] = 'field_last_name_listing_value';
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
    'directory_listing' => 'directory_listing',
  );
  /* Filter criterion: Content: Type (field_directory_listing_type) */
  $handler->display->display_options['filters']['field_directory_listing_type_tid']['id'] = 'field_directory_listing_type_tid';
  $handler->display->display_options['filters']['field_directory_listing_type_tid']['table'] = 'field_data_field_directory_listing_type';
  $handler->display->display_options['filters']['field_directory_listing_type_tid']['field'] = 'field_directory_listing_type_tid';
  $handler->display->display_options['filters']['field_directory_listing_type_tid']['value'] = array(
    661 => '661',
  );
  $handler->display->display_options['filters']['field_directory_listing_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_directory_listing_type_tid']['vocabulary'] = 'directory_listing_type';
  $handler->display->display_options['path'] = 'directory/alphabetical';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Alphabetical';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['directory'] = $view;

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'caltechlibrary';
  $view->base_table = 'search_api_index_directorylisting';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff Directory (in development)';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'staff-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'block-grid-list medium-block-grid-2';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Text Wrapper';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'title',
    1 => 'field_job_title_listing',
    2 => 'field_directory_department',
    3 => 'field_email',
    4 => 'field_phone_number_listing',
    5 => 'field_directory_location',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'small-8 columns';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Job Title */
  $handler->display->display_options['fields']['field_job_title_listing']['id'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['field_job_title_listing']['field'] = 'field_job_title_listing';
  $handler->display->display_options['fields']['field_job_title_listing']['label'] = '';
  $handler->display->display_options['fields']['field_job_title_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_job_title_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Department */
  $handler->display->display_options['fields']['field_directory_department']['id'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['field_directory_department']['field'] = 'field_directory_department';
  $handler->display->display_options['fields']['field_directory_department']['label'] = '';
  $handler->display->display_options['fields']['field_directory_department']['element_type'] = '0';
  $handler->display->display_options['fields']['field_directory_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_directory_department']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_directory_department']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_directory_department']['bypass_access'] = 0;
  /* Field: Indexed Node: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Phone number */
  $handler->display->display_options['fields']['field_phone_number_listing']['id'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['field_phone_number_listing']['field'] = 'field_phone_number_listing';
  $handler->display->display_options['fields']['field_phone_number_listing']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_type'] = '0';
  $handler->display->display_options['fields']['field_phone_number_listing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number_listing']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone_number_listing']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone_number_listing']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_directory_location']['id'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['field_directory_location']['field'] = 'field_directory_location';
  $handler->display->display_options['fields']['field_directory_location']['label'] = 'Office Location';
  $handler->display->display_options['fields']['field_directory_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Picture Wrapper';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_picture_file',
    1 => 'edit_node',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'small-4 columns right';
  /* Field: Picture: The image file. (indexed) */
  $handler->display->display_options['fields']['field_picture_file']['id'] = 'field_picture_file';
  $handler->display->display_options['fields']['field_picture_file']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['fields']['field_picture_file']['field'] = 'field_picture_file';
  $handler->display->display_options['fields']['field_picture_file']['label'] = '';
  $handler->display->display_options['fields']['field_picture_file']['element_type'] = '0';
  $handler->display->display_options['fields']['field_picture_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_picture_file']['display'] = 'view';
  $handler->display->display_options['fields']['field_picture_file']['view_mode'] = 'headshot';
  $handler->display->display_options['fields']['field_picture_file']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'label secondary edit-link';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit listing';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Sort criterion: Indexed Node: Last name/Secondary name */
  $handler->display->display_options['sorts']['field_last_name_listing']['id'] = 'field_last_name_listing';
  $handler->display->display_options['sorts']['field_last_name_listing']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['sorts']['field_last_name_listing']['field'] = 'field_last_name_listing';
  /* Sort criterion: Indexed Node: Name */
  $handler->display->display_options['sorts']['field_first_name_listing']['id'] = 'field_first_name_listing';
  $handler->display->display_options['sorts']['field_first_name_listing']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['sorts']['field_first_name_listing']['field'] = 'field_first_name_listing';
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    86 => 0,
    87 => 0,
    88 => 0,
    89 => 0,
    90 => 0,
    4 => 0,
    91 => 0,
    92 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_directory_location' => 'field_directory_location',
    'field_email' => 'field_email',
    'field_job_title_listing' => 'field_job_title_listing',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Type */
  $handler->display->display_options['filters']['field_directory_listing_type']['id'] = 'field_directory_listing_type';
  $handler->display->display_options['filters']['field_directory_listing_type']['table'] = 'search_api_index_directorylisting';
  $handler->display->display_options['filters']['field_directory_listing_type']['field'] = 'field_directory_listing_type';
  $handler->display->display_options['filters']['field_directory_listing_type']['value'] = array(
    661 => '661',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dev/staff';
  $handler->display->display_options['menu']['title'] = 'Alphabetical';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Staff';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['staff'] = $view;

  $view = new view();
  $view->name = 'staff_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Directory */
  $handler = $view->new_display('block', 'Directory', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['staff_directory'] = $view;

  return $export;
}
