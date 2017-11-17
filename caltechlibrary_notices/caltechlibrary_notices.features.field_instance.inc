<?php
/**
 * @file
 * caltechlibrary_notices.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function caltechlibrary_notices_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-notice-field_notice_active'.
  $field_instances['node-notice-field_notice_active'] = array(
    'bundle' => 'notice',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Notices will be displayed using logic that encompasses both this <i>Active</i> checkbox as well as any entered <i>Display Dates</i>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_default',
        'weight' => 2,
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
    'field_name' => 'field_notice_active',
    'label' => 'Active',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-notice-field_notice_dates'.
  $field_instances['node-notice-field_notice_dates'] = array(
    'bundle' => 'notice',
    'deleted' => 0,
    'description' => 'Optional. Enter start and end dates for the notice to display. Notices will be displayed using logic that encompasses both this <i>Display Dates</i> field as well as the <i>Active</i> checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
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
    'field_name' => 'field_notice_dates',
    'label' => 'Display Dates',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-notice-field_notice_link'.
  $field_instances['node-notice-field_notice_link'] = array(
    'bundle' => 'notice',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optional. Enter an external URL or click the <i>Internal Link</i> button to search for internal site content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 1,
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
    'field_name' => 'field_notice_link',
    'label' => 'More Information Link',
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
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Internal Link',
        'enable' => 1,
        'profile' => 'link_field_nodes',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'More Information ▸',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-notice-field_notice_notice'.
  $field_instances['node-notice-field_notice_notice'] = array(
    'bundle' => 'notice',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please keep the text of the <i>Notice</i> short and use the <i>More Information Link</i> for further explanation. Most HTML will be stripped.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_notice_notice',
    'label' => 'Notice',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-notice-field_notice_severity'.
  $field_instances['node-notice-field_notice_severity'] = array(
    'bundle' => 'notice',
    'default_value' => array(
      0 => array(
        'value' => 'info',
      ),
    ),
    'deleted' => 0,
    'description' => '<i>Info</i> notices will appear in a blue box. (Default)<br>
<i>Warning</i> notices will appear in a yellow box.<br>
<i>Alert</i> notices will appear in a red box.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
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
    'field_name' => 'field_notice_severity',
    'label' => 'Severity',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<i>Info</i> notices will appear in a blue box. (Default)<br>
<i>Warning</i> notices will appear in a yellow box.<br>
<i>Alert</i> notices will appear in a red box.');
  t('Active');
  t('Display Dates');
  t('More Information Link');
  t('Notice');
  t('Notices will be displayed using logic that encompasses both this <i>Active</i> checkbox as well as any entered <i>Display Dates</i>.');
  t('Optional. Enter an external URL or click the <i>Internal Link</i> button to search for internal site content.');
  t('Optional. Enter start and end dates for the notice to display. Notices will be displayed using logic that encompasses both this <i>Display Dates</i> field as well as the <i>Active</i> checkbox.');
  t('Please keep the text of the <i>Notice</i> short and use the <i>More Information Link</i> for further explanation. Most HTML will be stripped.');
  t('Severity');

  return $field_instances;
}
