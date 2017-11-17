<?php
/**
 * @file
 * caltechlibrary_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caltechlibrary_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function caltechlibrary_media_image_default_styles() {
  $styles = array();

  // Exported image style: headshot.
  $styles['headshot'] = array(
    'label' => 'Headshot',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_slider.
  $styles['home_slider'] = array(
    'label' => 'Home Slider',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 512,
          'height' => 384,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon.
  $styles['icon'] = array(
    'label' => 'Icon',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => 50,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tiny.
  $styles['tiny'] = array(
    'label' => 'Tiny (24 pixels)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 24,
          'height' => 24,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
