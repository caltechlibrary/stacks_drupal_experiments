<?php
/**
 * @file
 * caltechlibrary_media.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function caltechlibrary_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_medium';
  $ds_view_mode->label = 'Block Medium';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['block_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_original';
  $ds_view_mode->label = 'Block Original';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['block_original'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_thumbnail';
  $ds_view_mode->label = 'Block Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['block_thumbnail'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'center_original';
  $ds_view_mode->label = 'Center Original';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['center_original'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_large';
  $ds_view_mode->label = 'Left Large';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['left_large'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_medium';
  $ds_view_mode->label = 'Left Medium';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['left_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_original';
  $ds_view_mode->label = 'Left Original';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['left_original'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'left_thumbnail';
  $ds_view_mode->label = 'Left Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['left_thumbnail'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'original';
  $ds_view_mode->label = 'Original';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['original'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_large';
  $ds_view_mode->label = 'Right Large';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['right_large'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_medium';
  $ds_view_mode->label = 'Right Medium';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['right_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_original';
  $ds_view_mode->label = 'Right Original';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['right_original'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'right_thumbnail';
  $ds_view_mode->label = 'Right Thumbnail';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['right_thumbnail'] = $ds_view_mode;

  return $export;
}
