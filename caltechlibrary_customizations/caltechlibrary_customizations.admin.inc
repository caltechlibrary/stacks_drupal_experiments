<?php

/**
 * @file
 * Admin page callbacks for the caltechlibrary_customizations module.
 */

/**
 * Provide a single block from the administration menu as a page.
 *
 * This function is often a destination for these blocks.
 * For example, 'admin/structure/types' needs to have a destination to be valid
 * in the Drupal menu system, but too much information there might be
 * hidden, so we supply the contents of the block.
 *
 * @return
 *   The output HTML.
 */
function caltechlibrary_customizations_admin_menu_block_page() {
  $item = menu_get_item();
  if ($content = system_admin_menu_block($item)) {
    $output = theme('admin_block_content', array('content' => $content));
  }
  else {
    $output = t('You do not have any administrative items.');
  }
  return $output;
}

/**
 * Form builder; The search settings form.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function caltechlibrary_customizations_search_settings() {
  $form['site_search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Site search'),
  );
  $form['site_search']['placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Placeholder text'),
    '#default_value' => variable_get('caltechlibrary_site_search_placeholder', 'Drupal'),
    '#description' => t("Text found in the search box to prompt for user input."),
  );
  // $form['site_information']['site_slogan'] = array(
  //   '#type' => 'textfield',
  //   '#title' => t('Slogan'),
  //   '#default_value' => variable_get('site_slogan', ''),
  //   '#description' => t("How this is used depends on your site's theme."),
  // );
  // $form['site_information']['site_mail'] = array(
  //   '#type' => 'textfield',
  //   '#title' => t('E-mail address'),
  //   '#default_value' => variable_get('site_mail', ini_get('sendmail_from')),
  //   '#description' => t("The <em>From</em> address in automated e-mails sent during registration and new password requests, and other notifications. (Use an address ending in your site's domain to help prevent this e-mail being flagged as spam.)"),
  //   '#required' => TRUE,
  // );
  // $form['front_page'] = array(
  //   '#type' => 'fieldset',
  //   '#title' => t('Front page'),
  // );
  // $form['front_page']['default_nodes_main'] = array(
  //   '#type' => 'select', '#title' => t('Number of posts on front page'),
  //   '#default_value' => variable_get('default_nodes_main', 10),
  //   '#options' => drupal_map_assoc(array(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 15, 20, 25, 30)),
  //   '#description' => t('The maximum number of posts displayed on overview pages such as the front page.')
  // );
  // $form['front_page']['site_frontpage'] = array(
  //   '#type' => 'textfield',
  //   '#title' => t('Default front page'),
  //   '#default_value' => (variable_get('site_frontpage')!='node'?drupal_get_path_alias(variable_get('site_frontpage', 'node')):''),
  //   '#size' => 40,
  //   '#description' => t('Optionally, specify a relative URL to display as the front page.  Leave blank to display the default content feed.'),
  //   '#field_prefix' => url(NULL, array('absolute' => TRUE)) . (variable_get('clean_url', 0) ? '' : '?q='),
  // );
  // $form['error_page'] = array(
  //   '#type' => 'fieldset',
  //   '#title' => t('Error pages'),
  // );
  // $form['error_page']['site_403'] = array(
  //   '#type' => 'textfield',
  //   '#title' => t('Default 403 (access denied) page'),
  //   '#default_value' => variable_get('site_403', ''),
  //   '#size' => 40,
  //   '#description' => t('This page is displayed when the requested document is denied to the current user. Leave blank to display a generic "access denied" page.'),
  //   '#field_prefix' => url(NULL, array('absolute' => TRUE)) . (variable_get('clean_url', 0) ? '' : '?q=')
  // );
  // $form['error_page']['site_404'] = array(
  //   '#type' => 'textfield',
  //   '#title' => t('Default 404 (not found) page'),
  //   '#default_value' => variable_get('site_404', ''),
  //   '#size' => 40,
  //   '#description' => t('This page is displayed when no other content matches the requested document. Leave blank to display a generic "page not found" page.'),
  //   '#field_prefix' => url(NULL, array('absolute' => TRUE)) . (variable_get('clean_url', 0) ? '' : '?q=')
  // );

  $form['#validate'][] = 'system_site_information_settings_validate';
dpm($form);
var_dump($form);
  return system_settings_form($form);
}

/**
 * Validates the submitted search settings form.
 */
function caltechlibrary_customizations_search_settings_validate($form, &$form_state) {
  // // Validate the e-mail address.
  // if ($error = user_validate_mail($form_state['values']['site_mail'])) {
  //   form_set_error('site_mail', $error);
  // }
  // // Check for empty front page path.
  // if (empty($form_state['values']['site_frontpage'])) {
  //   // Set to default "node".
  //   form_set_value($form['front_page']['site_frontpage'], 'node', $form_state);
  // }
  // else {
  //   // Get the normal path of the front page.
  //   form_set_value($form['front_page']['site_frontpage'], drupal_get_normal_path($form_state['values']['site_frontpage']), $form_state);
  // }
  // // Validate front page path.
  // if (!drupal_valid_path($form_state['values']['site_frontpage'])) {
  //   form_set_error('site_frontpage', t("The path '%path' is either invalid or you do not have access to it.", array('%path' => $form_state['values']['site_frontpage'])));
  // }
  // // Get the normal paths of both error pages.
  // if (!empty($form_state['values']['site_403'])) {
  //   form_set_value($form['error_page']['site_403'], drupal_get_normal_path($form_state['values']['site_403']), $form_state);
  // }
  // if (!empty($form_state['values']['site_404'])) {
  //   form_set_value($form['error_page']['site_404'], drupal_get_normal_path($form_state['values']['site_404']), $form_state);
  // }
  // // Validate 403 error path.
  // if (!empty($form_state['values']['site_403']) && !drupal_valid_path($form_state['values']['site_403'])) {
  //   form_set_error('site_403', t("The path '%path' is either invalid or you do not have access to it.", array('%path' => $form_state['values']['site_403'])));
  // }
  // // Validate 404 error path.
  // if (!empty($form_state['values']['site_404']) && !drupal_valid_path($form_state['values']['site_404'])) {
  //   form_set_error('site_404', t("The path '%path' is either invalid or you do not have access to it.", array('%path' => $form_state['values']['site_404'])));
  // }
}
