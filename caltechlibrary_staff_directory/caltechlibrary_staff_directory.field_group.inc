<?php
/**
 * @file
 * caltechlibrary_staff_directory.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function caltechlibrary_staff_directory_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hours_of_operation|node|directory_listing|default';
  $field_group->group_name = 'group_hours_of_operation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_listing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hours of Operation',
    'weight' => '7',
    'children' => array(
      0 => 'field_directory_monday',
      1 => 'field_directory_tuesday',
      2 => 'field_directory_wednesday',
      3 => 'field_directory_thursday',
      4 => 'field_directory_friday',
      5 => 'field_directory_saturday',
      6 => 'field_directory_sunday',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Hours of Operation',
      'instance_settings' => array(
        'classes' => 'hours-operation',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'h4',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_hours_of_operation|node|directory_listing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hours_of_operation|node|directory_listing|form';
  $field_group->group_name = 'group_hours_of_operation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hours of operation',
    'weight' => '16',
    'children' => array(
      0 => 'field_directory_monday',
      1 => 'field_directory_tuesday',
      2 => 'field_directory_wednesday',
      3 => 'field_directory_thursday',
      4 => 'field_directory_friday',
      5 => 'field_directory_saturday',
      6 => 'field_directory_sunday',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hours of operation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hours-of-operation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hours_of_operation|node|directory_listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media_listing|node|directory_listing|form';
  $field_group->group_name = 'group_social_media_listing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social media',
    'weight' => '17',
    'children' => array(
      0 => 'field_twitter_link',
      1 => 'field_linkedin_link',
      2 => 'field_facebook_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-social-media-listing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_social_media_listing|node|directory_listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|directory_listing|default';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'directory_listing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '8',
    'children' => array(
      0 => 'field_twitter_link',
      1 => 'field_linkedin_link',
      2 => 'field_facebook_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social Media',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social_media|node|directory_listing|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hours of Operation');
  t('Hours of operation');
  t('Social Media');
  t('Social media');

  return $field_groups;
}
