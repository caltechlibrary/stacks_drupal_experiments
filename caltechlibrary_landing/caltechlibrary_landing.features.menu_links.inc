<?php
/**
 * @file
 * caltechlibrary_landing.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function caltechlibrary_landing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-landing_-----thesis-libguide:http://libguides.caltech.edu/theses.
  $menu_links['menu-landing_-----thesis-libguide:http://libguides.caltech.edu/theses'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'http://libguides.caltech.edu/theses',
    'router_path' => '',
    'link_title' => '     Thesis Libguide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_-----thesis-libguide:http://libguides.caltech.edu/theses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_authoring-and-publishing:node/2617.
  $menu_links['menu-landing_authoring-and-publishing:node/2617'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'node/2617',
    'router_path' => 'node/%',
    'link_title' => 'Authoring and Publishing',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-landing_authoring-and-publishing:node/2617',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-landing_caltech-research-online:node/2619.
  $menu_links['menu-landing_caltech-research-online:node/2619'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'node/2619',
    'router_path' => 'node/%',
    'link_title' => 'Caltech Research Online',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-landing_caltech-research-online:node/2619',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-landing_caltechauthors-libguide:http://libguides.caltech.edu/caltechauthors.
  $menu_links['menu-landing_caltechauthors-libguide:http://libguides.caltech.edu/caltechauthors'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'http://libguides.caltech.edu/caltechauthors',
    'router_path' => '',
    'link_title' => 'CaltechAUTHORS Libguide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_caltechauthors-libguide:http://libguides.caltech.edu/caltechauthors',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_caltechauthors:http://authors.library.caltech.edu/.
  $menu_links['menu-landing_caltechauthors:http://authors.library.caltech.edu/'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'http://authors.library.caltech.edu/',
    'router_path' => '',
    'link_title' => 'CaltechAUTHORS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_caltechauthors:http://authors.library.caltech.edu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_caltechcampuspubs:http://caltechcampuspubs.library.caltech.edu/.
  $menu_links['menu-landing_caltechcampuspubs:http://caltechcampuspubs.library.caltech.edu/'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'http://caltechcampuspubs.library.caltech.edu/',
    'router_path' => '',
    'link_title' => 'CaltechCampusPubs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_caltechcampuspubs:http://caltechcampuspubs.library.caltech.edu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_caltechdata:node/2435.
  $menu_links['menu-landing_caltechdata:node/2435'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'node/2435',
    'router_path' => 'node/%',
    'link_title' => 'CaltechDATA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_caltechdata:node/2435',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_caltechthesis:http://thesis.library.caltech.edu/.
  $menu_links['menu-landing_caltechthesis:http://thesis.library.caltech.edu/'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'http://thesis.library.caltech.edu/',
    'router_path' => '',
    'link_title' => 'CaltechTHESIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_caltechthesis:http://thesis.library.caltech.edu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_subject-repositories-for-data:http://libguides.caltech.edu/data-management/SubjectRepositories.
  $menu_links['menu-landing_subject-repositories-for-data:http://libguides.caltech.edu/data-management/SubjectRepositories'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'http://libguides.caltech.edu/data-management/SubjectRepositories',
    'router_path' => '',
    'link_title' => 'Subject Repositories for Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'menu-landing_subject-repositories-for-data:http://libguides.caltech.edu/data-management/SubjectRepositories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'menu-landing_caltech-research-online:node/2619',
  );
  // Exported menu link: menu-landing_tools-and-technology:node/2618.
  $menu_links['menu-landing_tools-and-technology:node/2618'] = array(
    'menu_name' => 'menu-landing',
    'link_path' => 'node/2618',
    'router_path' => 'node/%',
    'link_title' => 'Tools and Technology',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-landing_tools-and-technology:node/2618',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('     Thesis Libguide');
  t('Authoring and Publishing');
  t('Caltech Research Online');
  t('CaltechAUTHORS');
  t('CaltechAUTHORS Libguide');
  t('CaltechCampusPubs');
  t('CaltechDATA');
  t('CaltechTHESIS');
  t('Subject Repositories for Data');
  t('Tools and Technology');

  return $menu_links;
}
