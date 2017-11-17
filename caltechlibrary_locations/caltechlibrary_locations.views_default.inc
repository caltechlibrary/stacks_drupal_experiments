<?php
/**
 * @file
 * caltechlibrary_locations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function caltechlibrary_locations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hours_locations';
  $view->description = '';
  $view->tag = 'caltechlibrary';
  $view->base_table = 'node';
  $view->human_name = 'Hours & Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Locations & Hours';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Contact persons (field_branch_contact) */
  $handler->display->display_options['relationships']['field_branch_contact_value']['id'] = 'field_branch_contact_value';
  $handler->display->display_options['relationships']['field_branch_contact_value']['table'] = 'field_data_field_branch_contact';
  $handler->display->display_options['relationships']['field_branch_contact_value']['field'] = 'field_branch_contact_value';
  $handler->display->display_options['relationships']['field_branch_contact_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Location Wrapper';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title_1',
    1 => 'field_branch_street_address',
    2 => 'fieldset_1',
    3 => 'field_branch_notes',
    4 => 'field_branch_phone',
    5 => 'field_branch_contact_name',
    6 => 'field_branch_contact_phone',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'large-6 columns';
  $handler->display->display_options['fields']['fieldset']['fieldset']['id'] = '[title]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = '0';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h2';
  /* Field: Content: Street address */
  $handler->display->display_options['fields']['field_branch_street_address']['id'] = 'field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['table'] = 'field_data_field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['field'] = 'field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['label'] = 'Campus Location';
  $handler->display->display_options['fields']['field_branch_street_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_street_address']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_branch_street_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_street_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Hours';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_branch_sunday',
    1 => 'field_branch_monday',
    2 => 'field_branch_tuesday',
    3 => 'field_branch_wednesday',
    4 => 'field_branch_thursday',
    5 => 'field_branch_friday',
    6 => 'field_branch_saturday',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Sunday */
  $handler->display->display_options['fields']['field_branch_sunday']['id'] = 'field_branch_sunday';
  $handler->display->display_options['fields']['field_branch_sunday']['table'] = 'field_data_field_branch_sunday';
  $handler->display->display_options['fields']['field_branch_sunday']['field'] = 'field_branch_sunday';
  $handler->display->display_options['fields']['field_branch_sunday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_sunday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_sunday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_sunday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_sunday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_sunday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_sunday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Monday */
  $handler->display->display_options['fields']['field_branch_monday']['id'] = 'field_branch_monday';
  $handler->display->display_options['fields']['field_branch_monday']['table'] = 'field_data_field_branch_monday';
  $handler->display->display_options['fields']['field_branch_monday']['field'] = 'field_branch_monday';
  $handler->display->display_options['fields']['field_branch_monday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_monday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_monday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_monday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_monday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_monday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_monday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Tuesday */
  $handler->display->display_options['fields']['field_branch_tuesday']['id'] = 'field_branch_tuesday';
  $handler->display->display_options['fields']['field_branch_tuesday']['table'] = 'field_data_field_branch_tuesday';
  $handler->display->display_options['fields']['field_branch_tuesday']['field'] = 'field_branch_tuesday';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_tuesday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Wednesday */
  $handler->display->display_options['fields']['field_branch_wednesday']['id'] = 'field_branch_wednesday';
  $handler->display->display_options['fields']['field_branch_wednesday']['table'] = 'field_data_field_branch_wednesday';
  $handler->display->display_options['fields']['field_branch_wednesday']['field'] = 'field_branch_wednesday';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_wednesday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Thursday */
  $handler->display->display_options['fields']['field_branch_thursday']['id'] = 'field_branch_thursday';
  $handler->display->display_options['fields']['field_branch_thursday']['table'] = 'field_data_field_branch_thursday';
  $handler->display->display_options['fields']['field_branch_thursday']['field'] = 'field_branch_thursday';
  $handler->display->display_options['fields']['field_branch_thursday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_thursday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_thursday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_thursday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_thursday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_thursday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_thursday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Friday */
  $handler->display->display_options['fields']['field_branch_friday']['id'] = 'field_branch_friday';
  $handler->display->display_options['fields']['field_branch_friday']['table'] = 'field_data_field_branch_friday';
  $handler->display->display_options['fields']['field_branch_friday']['field'] = 'field_branch_friday';
  $handler->display->display_options['fields']['field_branch_friday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_friday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_friday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_friday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_friday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_friday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_friday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Saturday */
  $handler->display->display_options['fields']['field_branch_saturday']['id'] = 'field_branch_saturday';
  $handler->display->display_options['fields']['field_branch_saturday']['table'] = 'field_data_field_branch_saturday';
  $handler->display->display_options['fields']['field_branch_saturday']['field'] = 'field_branch_saturday';
  $handler->display->display_options['fields']['field_branch_saturday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_saturday']['element_class'] = 'small-6 medium-9 columns';
  $handler->display->display_options['fields']['field_branch_saturday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_saturday']['element_label_class'] = 'small-6 medium-3 columns';
  $handler->display->display_options['fields']['field_branch_saturday']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_branch_saturday']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_saturday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_branch_notes']['id'] = 'field_branch_notes';
  $handler->display->display_options['fields']['field_branch_notes']['table'] = 'field_data_field_branch_notes';
  $handler->display->display_options['fields']['field_branch_notes']['field'] = 'field_branch_notes';
  $handler->display->display_options['fields']['field_branch_notes']['label'] = 'Hours Notes';
  $handler->display->display_options['fields']['field_branch_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_notes']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_branch_phone']['id'] = 'field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['table'] = 'field_data_field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['field'] = 'field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_phone']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_branch_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_branch_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_branch_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field collection item: Location name */
  $handler->display->display_options['fields']['field_branch_contact_name']['id'] = 'field_branch_contact_name';
  $handler->display->display_options['fields']['field_branch_contact_name']['table'] = 'field_data_field_branch_contact_name';
  $handler->display->display_options['fields']['field_branch_contact_name']['field'] = 'field_branch_contact_name';
  $handler->display->display_options['fields']['field_branch_contact_name']['relationship'] = 'field_branch_contact_value';
  $handler->display->display_options['fields']['field_branch_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_branch_contact_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_contact_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_branch_contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch_contact_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_contact_name']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field collection item: Phone */
  $handler->display->display_options['fields']['field_branch_contact_phone']['id'] = 'field_branch_contact_phone';
  $handler->display->display_options['fields']['field_branch_contact_phone']['table'] = 'field_data_field_branch_contact_phone';
  $handler->display->display_options['fields']['field_branch_contact_phone']['field'] = 'field_branch_contact_phone';
  $handler->display->display_options['fields']['field_branch_contact_phone']['relationship'] = 'field_branch_contact_value';
  $handler->display->display_options['fields']['field_branch_contact_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_contact_phone']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_branch_contact_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_contact_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_branch_contact_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_branch_contact_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_branch_location_notes']['id'] = 'field_branch_location_notes';
  $handler->display->display_options['fields']['field_branch_location_notes']['table'] = 'field_data_field_branch_location_notes';
  $handler->display->display_options['fields']['field_branch_location_notes']['field'] = 'field_branch_location_notes';
  $handler->display->display_options['fields']['field_branch_location_notes']['label'] = '';
  $handler->display->display_options['fields']['field_branch_location_notes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_location_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch_location_notes']['element_wrapper_class'] = 'medium-6 columns';
  $handler->display->display_options['fields']['field_branch_location_notes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_location_notes']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'locations_sort:page';
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
    'library_branch' => 'library_branch',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about/hours';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Geocode */
  $handler->display->display_options['fields']['field_branch_geocode']['id'] = 'field_branch_geocode';
  $handler->display->display_options['fields']['field_branch_geocode']['table'] = 'field_data_field_branch_geocode';
  $handler->display->display_options['fields']['field_branch_geocode']['field'] = 'field_branch_geocode';
  $handler->display->display_options['fields']['field_branch_geocode']['label'] = '';
  $handler->display->display_options['fields']['field_branch_geocode']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_geocode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch_geocode']['element_wrapper_class'] = 'medium-6 columns right';
  $handler->display->display_options['fields']['field_branch_geocode']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_branch_geocode']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_branch_geocode']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_center' => array(
      'lat' => '',
      'lon' => '',
      'geocode' => 'Find my location',
    ),
    'geofield_map_zoom' => '17',
    'geofield_map_min_zoom' => '0',
    'geofield_map_max_zoom' => '0',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
    'field_formatter_class' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Location Wrapper';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_branch_street_address',
    1 => 'field_branch_sunday',
    2 => 'field_branch_monday',
    3 => 'field_branch_tuesday',
    4 => 'field_branch_wednesday',
    5 => 'field_branch_thursday',
    6 => 'field_branch_friday',
    7 => 'field_branch_saturday',
    8 => 'field_branch_notes',
    9 => 'field_branch_phone',
    10 => 'field_branch_contact_name',
    11 => 'field_branch_contact_phone',
    12 => 'field_branch_location_notes',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'medium-6 columns';
  /* Field: Content: Street address */
  $handler->display->display_options['fields']['field_branch_street_address']['id'] = 'field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['table'] = 'field_data_field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['field'] = 'field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['label'] = 'Campus Location';
  $handler->display->display_options['fields']['field_branch_street_address']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_street_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_street_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Sunday */
  $handler->display->display_options['fields']['field_branch_sunday']['id'] = 'field_branch_sunday';
  $handler->display->display_options['fields']['field_branch_sunday']['table'] = 'field_data_field_branch_sunday';
  $handler->display->display_options['fields']['field_branch_sunday']['field'] = 'field_branch_sunday';
  $handler->display->display_options['fields']['field_branch_sunday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_sunday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_sunday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Monday */
  $handler->display->display_options['fields']['field_branch_monday']['id'] = 'field_branch_monday';
  $handler->display->display_options['fields']['field_branch_monday']['table'] = 'field_data_field_branch_monday';
  $handler->display->display_options['fields']['field_branch_monday']['field'] = 'field_branch_monday';
  $handler->display->display_options['fields']['field_branch_monday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_monday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_monday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Tuesday */
  $handler->display->display_options['fields']['field_branch_tuesday']['id'] = 'field_branch_tuesday';
  $handler->display->display_options['fields']['field_branch_tuesday']['table'] = 'field_data_field_branch_tuesday';
  $handler->display->display_options['fields']['field_branch_tuesday']['field'] = 'field_branch_tuesday';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_tuesday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_tuesday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Wednesday */
  $handler->display->display_options['fields']['field_branch_wednesday']['id'] = 'field_branch_wednesday';
  $handler->display->display_options['fields']['field_branch_wednesday']['table'] = 'field_data_field_branch_wednesday';
  $handler->display->display_options['fields']['field_branch_wednesday']['field'] = 'field_branch_wednesday';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_wednesday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_wednesday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Thursday */
  $handler->display->display_options['fields']['field_branch_thursday']['id'] = 'field_branch_thursday';
  $handler->display->display_options['fields']['field_branch_thursday']['table'] = 'field_data_field_branch_thursday';
  $handler->display->display_options['fields']['field_branch_thursday']['field'] = 'field_branch_thursday';
  $handler->display->display_options['fields']['field_branch_thursday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_thursday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_thursday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Friday */
  $handler->display->display_options['fields']['field_branch_friday']['id'] = 'field_branch_friday';
  $handler->display->display_options['fields']['field_branch_friday']['table'] = 'field_data_field_branch_friday';
  $handler->display->display_options['fields']['field_branch_friday']['field'] = 'field_branch_friday';
  $handler->display->display_options['fields']['field_branch_friday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_friday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_friday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Saturday */
  $handler->display->display_options['fields']['field_branch_saturday']['id'] = 'field_branch_saturday';
  $handler->display->display_options['fields']['field_branch_saturday']['table'] = 'field_data_field_branch_saturday';
  $handler->display->display_options['fields']['field_branch_saturday']['field'] = 'field_branch_saturday';
  $handler->display->display_options['fields']['field_branch_saturday']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_saturday']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_branch_saturday']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_branch_notes']['id'] = 'field_branch_notes';
  $handler->display->display_options['fields']['field_branch_notes']['table'] = 'field_data_field_branch_notes';
  $handler->display->display_options['fields']['field_branch_notes']['field'] = 'field_branch_notes';
  $handler->display->display_options['fields']['field_branch_notes']['label'] = 'Hours Notes';
  $handler->display->display_options['fields']['field_branch_notes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_notes']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_branch_phone']['id'] = 'field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['table'] = 'field_data_field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['field'] = 'field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_branch_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_branch_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field collection item: Location name */
  $handler->display->display_options['fields']['field_branch_contact_name']['id'] = 'field_branch_contact_name';
  $handler->display->display_options['fields']['field_branch_contact_name']['table'] = 'field_data_field_branch_contact_name';
  $handler->display->display_options['fields']['field_branch_contact_name']['field'] = 'field_branch_contact_name';
  $handler->display->display_options['fields']['field_branch_contact_name']['relationship'] = 'field_branch_contact_value';
  $handler->display->display_options['fields']['field_branch_contact_name']['label'] = '';
  $handler->display->display_options['fields']['field_branch_contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch_contact_name']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field collection item: Phone */
  $handler->display->display_options['fields']['field_branch_contact_phone']['id'] = 'field_branch_contact_phone';
  $handler->display->display_options['fields']['field_branch_contact_phone']['table'] = 'field_data_field_branch_contact_phone';
  $handler->display->display_options['fields']['field_branch_contact_phone']['field'] = 'field_branch_contact_phone';
  $handler->display->display_options['fields']['field_branch_contact_phone']['relationship'] = 'field_branch_contact_value';
  $handler->display->display_options['fields']['field_branch_contact_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_contact_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_branch_contact_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_branch_contact_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_branch_location_notes']['id'] = 'field_branch_location_notes';
  $handler->display->display_options['fields']['field_branch_location_notes']['table'] = 'field_data_field_branch_location_notes';
  $handler->display->display_options['fields']['field_branch_location_notes']['field'] = 'field_branch_location_notes';
  $handler->display->display_options['fields']['field_branch_location_notes']['label'] = '';
  $handler->display->display_options['fields']['field_branch_location_notes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_location_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch_location_notes']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Table of Contents */
  $handler = $view->new_display('attachment', 'Table of Contents', 'attachment');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'medium-6 columns';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'about/hours#[title]';
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );

  /* Display: Map */
  $handler = $view->new_display('attachment', 'Map', 'map');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'medium-6 columns';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_branch_geocode';
  $handler->display->display_options['style_options']['popup_source'] = 'field_branch_phone';
  $handler->display->display_options['style_options']['geofield_map_min_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_max_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_center'] = array(
    'lat' => '',
    'lon' => '',
    'geocode' => 'Find my location',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'about/hours#[title]';
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Street address */
  $handler->display->display_options['fields']['field_branch_street_address']['id'] = 'field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['table'] = 'field_data_field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['field'] = 'field_branch_street_address';
  $handler->display->display_options['fields']['field_branch_street_address']['label'] = 'Campus Location';
  $handler->display->display_options['fields']['field_branch_street_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_street_address']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_branch_street_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_street_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_branch_phone']['id'] = 'field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['table'] = 'field_data_field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['field'] = 'field_branch_phone';
  $handler->display->display_options['fields']['field_branch_phone']['label'] = '';
  $handler->display->display_options['fields']['field_branch_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_branch_phone']['alter']['text'] = '[title]<br>
[field_branch_street_address]<br>
[field_branch_phone]';
  $handler->display->display_options['fields']['field_branch_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_branch_phone']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_branch_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_branch_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_branch_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_branch_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Geocode */
  $handler->display->display_options['fields']['field_branch_geocode']['id'] = 'field_branch_geocode';
  $handler->display->display_options['fields']['field_branch_geocode']['table'] = 'field_data_field_branch_geocode';
  $handler->display->display_options['fields']['field_branch_geocode']['field'] = 'field_branch_geocode';
  $handler->display->display_options['fields']['field_branch_geocode']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_branch_geocode']['settings'] = array(
    'data' => 'full',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );
  $export['hours_locations'] = $view;

  $view = new view();
  $view->name = 'locations_sort';
  $view->description = 'Provides a DraggableViews table for sorting Locations.';
  $view->tag = 'caltechlibrary';
  $view->base_table = 'node';
  $view->human_name = 'Locations Sort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Locations Sort';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'locations_sort:page';
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
    'library_branch' => 'library_branch',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/locations-and-hours/sort';
  $export['locations_sort'] = $view;

  return $export;
}
