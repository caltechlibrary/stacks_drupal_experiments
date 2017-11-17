<?php
/**
 * @file
 * caltechlibrary_editor.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function caltechlibrary_editor_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'link_wysiwyg';
  $linkit_profile->admin_title = 'Link WYSIWYG';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'filtered_html' => 'filtered_html',
      'full_html' => 'full_html',
      'plain_text' => 0,
      'php_code' => 0,
    ),
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:studyroom_space' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'e_resource' => 'e_resource',
        'directory_listing' => 'directory_listing',
        'webform' => 'webform',
        'event' => 'event',
        'library_branch' => 'library_branch',
        'news' => 'news',
        'guide' => 'guide',
        'reserves' => 'reserves',
        'page' => 'page',
        'callout' => 0,
        'history' => 0,
        'flipster' => 0,
        'panel' => 0,
        'rss_item' => 0,
        'resource_list' => 0,
        'slider' => 0,
        'slider_mini' => 0,
        'software' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:studyroom_space' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'e_resource' => 0,
        'event_category' => 0,
        'subject' => 0,
        'profile_type' => 0,
        'course' => 0,
        'topic' => 0,
        'type' => 0,
        'guide_type' => 0,
        'directory_listing_type' => 0,
        'course_term_season' => 0,
        'event_type' => 0,
        'media_folders' => 0,
        'dashboard_tile_icon' => 0,
        'tags' => 0,
        'department' => 0,
        'it_software' => 0,
        'software_locations' => 0,
        'software_computers' => 0,
        'software_categories' => 0,
        'space_category' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['link_wysiwyg'] = $linkit_profile;

  return $export;
}
