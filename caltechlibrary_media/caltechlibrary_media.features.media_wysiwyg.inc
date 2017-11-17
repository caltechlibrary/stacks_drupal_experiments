<?php
/**
 * @file
 * caltechlibrary_media.features.media_wysiwyg.inc
 */

/**
 * Implements hook_media_wysiwyg_defaults().
 */
function caltechlibrary_media_media_wysiwyg_defaults() {
  $media_wysiwyg = array();

  // WYSIWYG view mode for image files.
  $media_wysiwyg['image_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for image files.
  $media_wysiwyg['image_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_wysiwyg_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['image_block_medium_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_block_original_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_block_thumbnail_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_center_original_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_left_large_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_left_medium_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_left_original_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_left_thumbnail_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_original_restrict_wysiwyg'] = TRUE;
  $media_wysiwyg['image_right_large_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_right_medium_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_right_original_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_right_thumbnail_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['image_default_restrict_wysiwyg'] = TRUE;

  // WYSIWYG view mode for video files.
  $media_wysiwyg['video_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for video files.
  $media_wysiwyg['video_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['video_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['video_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['video_default_restrict_wysiwyg'] = FALSE;

  // WYSIWYG view mode for audio files.
  $media_wysiwyg['audio_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for audio files.
  $media_wysiwyg['audio_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['audio_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['audio_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['audio_default_restrict_wysiwyg'] = FALSE;

  // WYSIWYG view mode for document files.
  $media_wysiwyg['document_wysiwyg_view_mode'] = 'none';

  // Restricted view modes for document files.
  $media_wysiwyg['document_teaser_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_preview_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_wysiwyg_restrict_wysiwyg'] = FALSE;
  $media_wysiwyg['document_default_restrict_wysiwyg'] = FALSE;

  return $media_wysiwyg;
}
