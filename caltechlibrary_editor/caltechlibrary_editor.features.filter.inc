<?php
/**
 * @file
 * caltechlibrary_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function caltechlibrary_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'spamspan' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => 0,
          'spamspan_form_pattern' => '<a href="%url?goto=%email">%displaytext</a>',
          'spamspan_form_default_url' => 'contact',
          'spamspan_form_default_displaytext' => 'contact form',
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <h2> <h3> <h4> <img> <br> <hr> <span>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'accordion' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter_paragraph_fix' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'spamspan' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_form_pattern' => '<a href="%url?goto=%email">%displaytext</a>',
          'spamspan_form_default_url' => 'contact',
          'spamspan_form_default_displaytext' => 'contact form',
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'accordion' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
