<?php
/**
 * @file
 * caltechlibrary_journals_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function caltechlibrary_journals_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'journals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_caltechlibrary_journals';
  $view->human_name = 'Journals A–Z';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Journals A–Z';
  $handler->display->display_options['css_class'] = 'journals-az';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 1,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => '',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 1,
      'secondary_label' => 'Advanced Search',
      'secondary_collapse_override' => '0',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title_2' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'exact match',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'search_api_aggregation_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'contains',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'alt_title' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'contains',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'search_api_views_fulltext_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'issn, isbn, etc.',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'publisher' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'exact match',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'search_api_aggregation_3' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'contains',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'package' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'exact match',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'search_api_aggregation_2' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'contains',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'description' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'contains',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'keywords' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => 'contains',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Journal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Journal: PrintSN */
  $handler->display->display_options['fields']['sn_print']['id'] = 'sn_print';
  $handler->display->display_options['fields']['sn_print']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['sn_print']['field'] = 'sn_print';
  $handler->display->display_options['fields']['sn_print']['label'] = 'Print';
  $handler->display->display_options['fields']['sn_print']['alter']['text'] = 'Print: [sn_print]';
  $handler->display->display_options['fields']['sn_print']['element_type'] = '0';
  $handler->display->display_options['fields']['sn_print']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['sn_print']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['sn_print']['link_to_entity'] = 0;
  /* Field: Indexed Journal: OnlineSN */
  $handler->display->display_options['fields']['sn_online']['id'] = 'sn_online';
  $handler->display->display_options['fields']['sn_online']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['sn_online']['field'] = 'sn_online';
  $handler->display->display_options['fields']['sn_online']['label'] = 'Online';
  $handler->display->display_options['fields']['sn_online']['alter']['text'] = 'Online: [sn_online]';
  $handler->display->display_options['fields']['sn_online']['element_type'] = '0';
  $handler->display->display_options['fields']['sn_online']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['sn_online']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['sn_online']['link_to_entity'] = 0;
  /* Field: Indexed Journal: CoverageBegin */
  $handler->display->display_options['fields']['coverage_begin']['id'] = 'coverage_begin';
  $handler->display->display_options['fields']['coverage_begin']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['coverage_begin']['field'] = 'coverage_begin';
  $handler->display->display_options['fields']['coverage_begin']['label'] = '';
  $handler->display->display_options['fields']['coverage_begin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['coverage_begin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['coverage_begin']['link_to_entity'] = 0;
  /* Field: Indexed Journal: CoverageEnd */
  $handler->display->display_options['fields']['coverage_end']['id'] = 'coverage_end';
  $handler->display->display_options['fields']['coverage_end']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['coverage_end']['field'] = 'coverage_end';
  $handler->display->display_options['fields']['coverage_end']['label'] = '';
  $handler->display->display_options['fields']['coverage_end']['exclude'] = TRUE;
  $handler->display->display_options['fields']['coverage_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['coverage_end']['link_to_entity'] = 0;
  /* Field: Coverage Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Coverage Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Coverage';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[coverage_begin] – [coverage_end]';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_class'] = 'views-label views-label-coverage';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'views-field views-field-coverage';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Indexed Journal: CoverageNote */
  $handler->display->display_options['fields']['coverage_note']['id'] = 'coverage_note';
  $handler->display->display_options['fields']['coverage_note']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['coverage_note']['field'] = 'coverage_note';
  $handler->display->display_options['fields']['coverage_note']['label'] = 'Coverage Note';
  $handler->display->display_options['fields']['coverage_note']['element_type'] = '0';
  $handler->display->display_options['fields']['coverage_note']['link_to_entity'] = 0;
  /* Field: Indexed Journal: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Journal: PackageName */
  $handler->display->display_options['fields']['package']['id'] = 'package';
  $handler->display->display_options['fields']['package']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['package']['field'] = 'package';
  $handler->display->display_options['fields']['package']['label'] = '';
  $handler->display->display_options['fields']['package']['exclude'] = TRUE;
  $handler->display->display_options['fields']['package']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['package']['link_to_entity'] = 0;
  /* Field: Indexed Journal: Publisher */
  $handler->display->display_options['fields']['publisher']['id'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['publisher']['field'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['label'] = '';
  $handler->display->display_options['fields']['publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publisher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publisher']['link_to_entity'] = 0;
  /* Field: Link, Package, Publisher */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Link, Package, Publisher';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Access';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="https://clsproxy.library.caltech.edu/login?qurl=[url]">[package]</a> provided by [publisher]
';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'views-field views-field-url-package-publisher';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Indexed Journal: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Indexed Journal: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Metadata Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['description'] = 'title, alternate titles, description, keywords, publisher, issn';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
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
    'alt_title' => 'alt_title',
    'description' => 'description',
    'search_api_aggregation_1' => 'search_api_aggregation_1',
    'search_api_aggregation_3' => 'search_api_aggregation_3',
    'search_api_aggregation_4' => 'search_api_aggregation_4',
    'sn_online' => 'sn_online',
    'sn_print' => 'sn_print',
  );
  /* Filter criterion: Indexed Journal: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = '>=';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title (string, greater than or equal to)';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = '(to be hidden)';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'o';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['operator'] = '<';
  $handler->display->display_options['filters']['title_2']['group'] = 1;
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Title (string, less than)';
  $handler->display->display_options['filters']['title_2']['expose']['description'] = '(to be hidden)';
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'x';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'exact match';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title_eq';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Title (fulltext) */
  $handler->display->display_options['filters']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['group'] = 1;
  $handler->display->display_options['filters']['search_api_aggregation_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['operator_id'] = 'search_api_aggregation_1_op';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['description'] = 'contains';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['operator'] = 'search_api_aggregation_1_op';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['alt_title']['id'] = 'alt_title';
  $handler->display->display_options['filters']['alt_title']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['alt_title']['field'] = 'alt_title';
  $handler->display->display_options['filters']['alt_title']['group'] = 1;
  $handler->display->display_options['filters']['alt_title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['alt_title']['expose']['operator_id'] = 'alt_title_op';
  $handler->display->display_options['filters']['alt_title']['expose']['label'] = 'Alternate Titles';
  $handler->display->display_options['filters']['alt_title']['expose']['description'] = 'contains';
  $handler->display->display_options['filters']['alt_title']['expose']['operator'] = 'alt_title_op';
  $handler->display->display_options['filters']['alt_title']['expose']['identifier'] = 'alt_title';
  $handler->display->display_options['filters']['alt_title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['id'] = 'search_api_views_fulltext_1';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['operator_id'] = 'search_api_views_fulltext_1_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['label'] = 'Serial Number';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['description'] = 'issn, isbn, etc.';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['operator'] = 'search_api_views_fulltext_1_op';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['identifier'] = 'sn';
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['search_api_views_fulltext_1']['fields'] = array(
    'sn_online' => 'sn_online',
    'sn_print' => 'sn_print',
  );
  /* Filter criterion: Indexed Journal: Publisher */
  $handler->display->display_options['filters']['publisher']['id'] = 'publisher';
  $handler->display->display_options['filters']['publisher']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['publisher']['field'] = 'publisher';
  $handler->display->display_options['filters']['publisher']['group'] = 1;
  $handler->display->display_options['filters']['publisher']['exposed'] = TRUE;
  $handler->display->display_options['filters']['publisher']['expose']['operator_id'] = 'publisher_op';
  $handler->display->display_options['filters']['publisher']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['publisher']['expose']['description'] = 'exact match';
  $handler->display->display_options['filters']['publisher']['expose']['operator'] = 'publisher_op';
  $handler->display->display_options['filters']['publisher']['expose']['identifier'] = 'publisher_eq';
  $handler->display->display_options['filters']['publisher']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Publisher (fulltext) */
  $handler->display->display_options['filters']['search_api_aggregation_3']['id'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['search_api_aggregation_3']['field'] = 'search_api_aggregation_3';
  $handler->display->display_options['filters']['search_api_aggregation_3']['group'] = 1;
  $handler->display->display_options['filters']['search_api_aggregation_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator_id'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['description'] = 'contains';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['operator'] = 'search_api_aggregation_3_op';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['identifier'] = 'publisher';
  $handler->display->display_options['filters']['search_api_aggregation_3']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: PackageName */
  $handler->display->display_options['filters']['package']['id'] = 'package';
  $handler->display->display_options['filters']['package']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['package']['field'] = 'package';
  $handler->display->display_options['filters']['package']['group'] = 1;
  $handler->display->display_options['filters']['package']['exposed'] = TRUE;
  $handler->display->display_options['filters']['package']['expose']['operator_id'] = 'package_op';
  $handler->display->display_options['filters']['package']['expose']['label'] = 'Package';
  $handler->display->display_options['filters']['package']['expose']['description'] = 'exact match';
  $handler->display->display_options['filters']['package']['expose']['operator'] = 'package_op';
  $handler->display->display_options['filters']['package']['expose']['identifier'] = 'package_eq';
  $handler->display->display_options['filters']['package']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Package (fulltext) */
  $handler->display->display_options['filters']['search_api_aggregation_2']['id'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['search_api_aggregation_2']['field'] = 'search_api_aggregation_2';
  $handler->display->display_options['filters']['search_api_aggregation_2']['group'] = 1;
  $handler->display->display_options['filters']['search_api_aggregation_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator_id'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['label'] = 'Package';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['description'] = 'contains';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['operator'] = 'search_api_aggregation_2_op';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['identifier'] = 'package';
  $handler->display->display_options['filters']['search_api_aggregation_2']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Description */
  $handler->display->display_options['filters']['description']['id'] = 'description';
  $handler->display->display_options['filters']['description']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['description']['field'] = 'description';
  $handler->display->display_options['filters']['description']['group'] = 1;
  $handler->display->display_options['filters']['description']['exposed'] = TRUE;
  $handler->display->display_options['filters']['description']['expose']['operator_id'] = 'description_op';
  $handler->display->display_options['filters']['description']['expose']['label'] = 'Description';
  $handler->display->display_options['filters']['description']['expose']['description'] = 'contains';
  $handler->display->display_options['filters']['description']['expose']['operator'] = 'description_op';
  $handler->display->display_options['filters']['description']['expose']['identifier'] = 'description';
  $handler->display->display_options['filters']['description']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Indexed Journal: Keywords */
  $handler->display->display_options['filters']['keywords']['id'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['table'] = 'search_api_index_caltechlibrary_journals';
  $handler->display->display_options['filters']['keywords']['field'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['group'] = 1;
  $handler->display->display_options['filters']['keywords']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keywords']['expose']['operator_id'] = 'keywords_op';
  $handler->display->display_options['filters']['keywords']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['keywords']['expose']['description'] = 'contains';
  $handler->display->display_options['filters']['keywords']['expose']['operator'] = 'keywords_op';
  $handler->display->display_options['filters']['keywords']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['keywords']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'journals/basic';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Basic Search';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Journals A–Z';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Advanced */
  $handler = $view->new_display('page', 'Advanced', 'advanced');
  $handler->display->display_options['path'] = 'journals/advanced';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Advanced Search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: A–Z */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'A–Z';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="?o=0&x=A">#</a> | 
<a href="?o=A&x=B">A</a> | 
<a href="?o=B&x=C">B</a> | 
<a href="?o=C&x=D">C</a> | 
<a href="?o=D&x=E">D</a> | 
<a href="?o=E&x=F">E</a> | 
<a href="?o=F&x=G">F</a> | 
<a href="?o=G&x=H">G</a> | 
<a href="?o=H&x=I">H</a> | 
<a href="?o=I&x=J">I</a> | 
<a href="?o=J&x=K">J</a> | 
<a href="?o=K&x=L">K</a> | 
<a href="?o=L&x=M">L</a> | 
<a href="?o=M&x=N">M</a> | 
<a href="?o=N&x=O">N</a> | 
<a href="?o=O&x=P">O</a> | 
<a href="?o=P&x=Q">P</a> | 
<a href="?o=Q&x=R">Q</a> | 
<a href="?o=R&x=S">R</a> | 
<a href="?o=S&x=T">S</a> | 
<a href="?o=T&x=U">T</a> | 
<a href="?o=U&x=V">U</a> | 
<a href="?o=V&x=W">V</a> | 
<a href="?o=W&x=X">W</a> | 
<a href="?o=X&x=Y">X</a> | 
<a href="?o=Y&x=Z">Y</a> | 
<a href="?o=Z">Z</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: NULL */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'NULL';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'advanced' => 'advanced',
    'default' => 0,
  );
  $export['journals'] = $view;

  return $export;
}
