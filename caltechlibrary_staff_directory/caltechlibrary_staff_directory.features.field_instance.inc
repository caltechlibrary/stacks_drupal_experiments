<?php
/**
 * @file
 * caltechlibrary_staff_directory.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function caltechlibrary_staff_directory_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-directory_listing-body'.
  $field_instances['node-directory_listing-body'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-directory_listing-field_directory_department'.
  $field_instances['node-directory_listing-field_directory_department'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_department',
    'label' => 'Department',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_friday'.
  $field_instances['node-directory_listing-field_directory_friday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_friday',
    'label' => 'Friday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'node-directory_listing-field_directory_listing_type'.
  $field_instances['node-directory_listing-field_directory_listing_type'] = array(
    'bundle' => 'directory_listing',
    'default_value' => array(
      0 => array(
        'tid' => 661,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_listing_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_location'.
  $field_instances['node-directory_listing-field_directory_location'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_location',
    'label' => 'Location',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-directory_listing-field_directory_location_tag'.
  $field_instances['node-directory_listing-field_directory_location_tag'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This <i>directory listing</i> entry will be filterable by the selected term in this field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_directory_location_tag',
    'label' => 'Building',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_monday'.
  $field_instances['node-directory_listing-field_directory_monday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_monday',
    'label' => 'Monday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_saturday'.
  $field_instances['node-directory_listing-field_directory_saturday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_saturday',
    'label' => 'Saturday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_services'.
  $field_instances['node-directory_listing-field_directory_services'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This <i>directory listing</i> entry will be filterable by the selected term in this field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_directory_services',
    'label' => 'Services',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_subjects'.
  $field_instances['node-directory_listing-field_directory_subjects'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This <i>directory listing</i> entry will be filterable by the selected term in this field. Enter subjects separated by commas. Please use the autocompleted values if they appear to avoid duplicate entries.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_directory_subjects',
    'label' => 'Subject Expertise',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_sunday'.
  $field_instances['node-directory_listing-field_directory_sunday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_sunday',
    'label' => 'Sunday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_tags'.
  $field_instances['node-directory_listing-field_directory_tags'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This <i>directory listing</i> entry will be filterable by the selected terms in this field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_directory_tags',
    'label' => 'Attributes',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_thursday'.
  $field_instances['node-directory_listing-field_directory_thursday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_thursday',
    'label' => 'Thursday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_directory_tuesday'.
  $field_instances['node-directory_listing-field_directory_tuesday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_tuesday',
    'label' => 'Tuesday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'node-directory_listing-field_directory_wednesday'.
  $field_instances['node-directory_listing-field_directory_wednesday'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_directory_wednesday',
    'label' => 'Wednesday',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_email'.
  $field_instances['node-directory_listing-field_email'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_facebook_link'.
  $field_instances['node-directory_listing-field_facebook_link'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_facebook_link',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_first_name_listing'.
  $field_instances['node-directory_listing-field_first_name_listing'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_first_name_listing',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_job_title_listing'.
  $field_instances['node-directory_listing-field_job_title_listing'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_job_title_listing',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_last_name_listing'.
  $field_instances['node-directory_listing-field_last_name_listing'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_last_name_listing',
    'label' => 'Last name/Secondary name',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_linkedin_link'.
  $field_instances['node-directory_listing-field_linkedin_link'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_linkedin_link',
    'label' => 'Linkedin',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-directory_listing-field_phone_number_listing'.
  $field_instances['node-directory_listing-field_phone_number_listing'] = array(
    'bundle' => 'directory_listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'cck_phone',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'global_phone_number',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phone_number_listing',
    'label' => 'Phone number',
    'required' => 0,
    'settings' => array(
      'all_country_codes' => 1,
      'country_code_position' => 'before',
      'country_codes' => array(
        'country_selection' => array(
          'ad' => 0,
          'ae' => 0,
          'af' => 0,
          'ag' => 0,
          'ai' => 0,
          'al' => 0,
          'am' => 0,
          'an' => 0,
          'ao' => 0,
          'ar' => 0,
          'as' => 0,
          'at' => 0,
          'au' => 0,
          'aw' => 0,
          'az' => 0,
          'ba' => 0,
          'bb' => 0,
          'bd' => 0,
          'be' => 0,
          'bf' => 0,
          'bg' => 0,
          'bh' => 0,
          'bi' => 0,
          'bj' => 0,
          'bm' => 0,
          'bn' => 0,
          'bo' => 0,
          'br' => 0,
          'bs' => 0,
          'bt' => 0,
          'bw' => 0,
          'by' => 0,
          'bz' => 0,
          'ca' => 0,
          'cc' => 0,
          'cd' => 0,
          'cf' => 0,
          'cg' => 0,
          'ch' => 0,
          'ci' => 0,
          'ck' => 0,
          'cl' => 0,
          'cm' => 0,
          'cn' => 0,
          'co' => 0,
          'cr' => 0,
          'cu' => 0,
          'cv' => 0,
          'cx' => 0,
          'cy' => 0,
          'cz' => 0,
          'de' => 0,
          'dj' => 0,
          'dk' => 0,
          'dm' => 0,
          'do' => 0,
          'dz' => 0,
          'ec' => 0,
          'ee' => 0,
          'eg' => 0,
          'er' => 0,
          'es' => 0,
          'et' => 0,
          'fi' => 0,
          'fj' => 0,
          'fk' => 0,
          'fm' => 0,
          'fo' => 0,
          'fr' => 0,
          'ga' => 0,
          'gb' => 0,
          'gd' => 0,
          'ge' => 0,
          'gf' => 0,
          'gh' => 0,
          'gi' => 0,
          'gl' => 0,
          'gm' => 0,
          'gn' => 0,
          'gp' => 0,
          'gq' => 0,
          'gr' => 0,
          'gt' => 0,
          'gu' => 0,
          'gw' => 0,
          'gy' => 0,
          'hk' => 0,
          'hn' => 0,
          'hr' => 0,
          'ht' => 0,
          'hu' => 0,
          'id' => 0,
          'ie' => 0,
          'il' => 0,
          'in' => 0,
          'io' => 0,
          'iq' => 0,
          'ir' => 0,
          'is' => 0,
          'it' => 0,
          'jm' => 0,
          'jo' => 0,
          'jp' => 0,
          'ke' => 0,
          'kg' => 0,
          'kh' => 0,
          'ki' => 0,
          'km' => 0,
          'kn' => 0,
          'kp' => 0,
          'kr' => 0,
          'kw' => 0,
          'ky' => 0,
          'kz' => 0,
          'la' => 0,
          'lb' => 0,
          'lc' => 0,
          'li' => 0,
          'lk' => 0,
          'lr' => 0,
          'ls' => 0,
          'lt' => 0,
          'lu' => 0,
          'lv' => 0,
          'ly' => 0,
          'ma' => 0,
          'mc' => 0,
          'md' => 0,
          'me' => 0,
          'mg' => 0,
          'mh' => 0,
          'mk' => 0,
          'ml' => 0,
          'mm' => 0,
          'mn' => 0,
          'mo' => 0,
          'mp' => 0,
          'mq' => 0,
          'mr' => 0,
          'ms' => 0,
          'mt' => 0,
          'mu' => 0,
          'mv' => 0,
          'mw' => 0,
          'mx' => 0,
          'my' => 0,
          'mz' => 0,
          'na' => 0,
          'nc' => 0,
          'ne' => 0,
          'nf' => 0,
          'ng' => 0,
          'ni' => 0,
          'nl' => 0,
          'no' => 0,
          'np' => 0,
          'nr' => 0,
          'nu' => 0,
          'nz' => 0,
          'om' => 0,
          'pa' => 0,
          'pe' => 0,
          'pf' => 0,
          'pg' => 0,
          'ph' => 0,
          'pk' => 0,
          'pl' => 0,
          'pm' => 0,
          'pr' => 0,
          'ps' => 0,
          'pt' => 0,
          'pw' => 0,
          'py' => 0,
          'qa' => 0,
          'ro' => 0,
          'rs' => 0,
          'ru' => 0,
          'rw' => 0,
          'sa' => 0,
          'sb' => 0,
          'sc' => 0,
          'sd' => 0,
          'se' => 0,
          'sg' => 0,
          'sh' => 0,
          'si' => 0,
          'sk' => 0,
          'sl' => 0,
          'sm' => 0,
          'sn' => 0,
          'so' => 0,
          'sr' => 0,
          'ss' => 0,
          'st' => 0,
          'sv' => 0,
          'sy' => 0,
          'sz' => 0,
          'tc' => 0,
          'td' => 0,
          'tg' => 0,
          'th' => 0,
          'tj' => 0,
          'tk' => 0,
          'tm' => 0,
          'tn' => 0,
          'to' => 0,
          'tp' => 0,
          'tr' => 0,
          'tt' => 0,
          'tv' => 0,
          'tw' => 0,
          'tz' => 0,
          'ua' => 0,
          'ug' => 0,
          'us' => 0,
          'uy' => 0,
          'uz' => 0,
          'va' => 0,
          'vc' => 0,
          've' => 0,
          'vg' => 0,
          'vi' => 0,
          'vn' => 0,
          'vu' => 0,
          'wf' => 0,
          'ws' => 0,
          'ye' => 0,
          'yt' => 0,
          'za' => 0,
          'zm' => 0,
          'zw' => 0,
        ),
        'hide_single_cc' => 0,
      ),
      'default_country' => 'us',
      'enable_country_level_validation' => 1,
      'enable_default_country' => 1,
      'enable_extension' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_phone',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'phone_number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_picture'.
  $field_instances['node-directory_listing-field_picture'] = array(
    'bundle' => 'directory_listing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => 'picture',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_picture',
    'label' => 'Picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_twitter_link'.
  $field_instances['node-directory_listing-field_twitter_link'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_twitter_link',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-directory_listing-field_workflow'.
  $field_instances['node-directory_listing-field_workflow'] = array(
    'bundle' => 'directory_listing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_workflow',
    'label' => 'Workflow',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'fieldset' => 0,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 18,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attributes');
  t('Building');
  t('Department');
  t('Description');
  t('Email');
  t('Facebook');
  t('Friday');
  t('Job Title');
  t('Last name/Secondary name');
  t('Linkedin');
  t('Location');
  t('Monday');
  t('Name');
  t('Phone number');
  t('Picture');
  t('Saturday');
  t('Services');
  t('Subject Expertise');
  t('Sunday');
  t('This <i>directory listing</i> entry will be filterable by the selected term in this field.');
  t('This <i>directory listing</i> entry will be filterable by the selected term in this field. Enter subjects separated by commas. Please use the autocompleted values if they appear to avoid duplicate entries.');
  t('This <i>directory listing</i> entry will be filterable by the selected terms in this field.');
  t('Thursday');
  t('Tuesday');
  t('Twitter');
  t('Type');
  t('Wednesday');
  t('Workflow');

  return $field_instances;
}
