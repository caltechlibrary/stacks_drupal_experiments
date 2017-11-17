<?php
/**
 * @file
 * caltechlibrary_front_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function caltechlibrary_front_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_5e34fcdb-2686-4dae-bdd0-510412ce9db6';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'home',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
          2 => 6,
          3 => 3,
          4 => 5,
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'notices',
        ),
        'parent' => 'main',
        'class' => 'notices',
        'hide_empty' => 1,
      ),
      'notices' => array(
        'type' => 'region',
        'title' => 'Notices',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '1_',
          1 => 'left_slider',
          2 => 'right_box',
        ),
        'parent' => 'main',
        'class' => 'triptych-top backgrounded regal-blue',
        'hide_empty' => 1,
      ),
      'left_slider' => array(
        'type' => 'region',
        'title' => '2',
        'width' => '33.3505402277182',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'medium-3 columns',
        'hide_empty' => 1,
      ),
      'right_box' => array(
        'type' => 'region',
        'title' => '3',
        'width' => '33.31232442449729',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'medium-3 columns',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => 'main',
        'class' => 'callout backgrounded boxed',
        'hide_empty' => 1,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Callout',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'callout',
        'hide_empty' => 1,
      ),
      '1_' => array(
        'type' => 'region',
        'title' => '1',
        'width' => '33.3371353477843',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'medium-6 columns',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_',
          1 => 'center',
          2 => 'right_',
        ),
        'parent' => 'main',
        'class' => 'triptych-bottom backgrounded regal-blue',
        'hide_empty' => 1,
      ),
      'left_' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '33.360090117998226',
        'width_type' => '%',
        'parent' => '5',
        'class' => 'medium-6 columns',
        'hide_empty' => 1,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '33.35367375343899',
        'width_type' => '%',
        'parent' => '5',
        'class' => 'medium-4 columns',
        'hide_empty' => 1,
      ),
      'right_' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '33.28623612856278',
        'width_type' => '%',
        'parent' => '5',
        'class' => 'medium-2 columns',
        'hide_empty' => 1,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'services',
        ),
        'parent' => 'main',
        'class' => 'services',
        'hide_empty' => 1,
      ),
      'services' => array(
        'type' => 'region',
        'title' => 'Services',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'notices' => NULL,
      'left_slider' => NULL,
      'right_box' => NULL,
      'content' => NULL,
      '1_' => NULL,
      '4_' => NULL,
      'left_' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'services' => NULL,
    ),
    'content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a2cd61f2-8cef-4407-96ab-4359346d31b3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel_context_5e34fcdb-2686-4dae-bdd0-510412ce9db6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-88cdfd7f-d272-491e-94ba-2a1087862af7';
  $pane->panel = '1_';
  $pane->type = 'block';
  $pane->subtype = 'views-home_slider-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '88cdfd7f-d272-491e-94ba-2a1087862af7';
  $display->content['new-88cdfd7f-d272-491e-94ba-2a1087862af7'] = $pane;
  $display->panels['1_'][0] = 'new-88cdfd7f-d272-491e-94ba-2a1087862af7';
  $pane = new stdClass();
  $pane->pid = 'new-44dd0b9b-d27e-42ce-a9b0-06a9a85d31a3';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'New in CaltechAUTHORS',
    'body' => '<?php
readfile(\'http://feeds.library.caltech.edu/recent/articles.include\');
?>

<div class="more-link">
  <a href="http://authors.library.caltech.edu/cgi/latest">View More from CaltechAUTHORS ▸</a>
</div>',
    'format' => 'php_code',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-caltechlibrary-customizations-caltechauthors',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '44dd0b9b-d27e-42ce-a9b0-06a9a85d31a3';
  $display->content['new-44dd0b9b-d27e-42ce-a9b0-06a9a85d31a3'] = $pane;
  $display->panels['center'][0] = 'new-44dd0b9b-d27e-42ce-a9b0-06a9a85d31a3';
  $pane = new stdClass();
  $pane->pid = 'new-abe1c4b2-a917-43d1-9e1c-13aec20d3ce3';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'nodeblock-2472';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abe1c4b2-a917-43d1-9e1c-13aec20d3ce3';
  $display->content['new-abe1c4b2-a917-43d1-9e1c-13aec20d3ce3'] = $pane;
  $display->panels['content'][0] = 'new-abe1c4b2-a917-43d1-9e1c-13aec20d3ce3';
  $pane = new stdClass();
  $pane->pid = 'new-e2a0781e-1916-4c8b-a8e0-c8084c458312';
  $pane->panel = 'left_';
  $pane->type = 'block';
  $pane->subtype = 'views-home_events-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2a0781e-1916-4c8b-a8e0-c8084c458312';
  $display->content['new-e2a0781e-1916-4c8b-a8e0-c8084c458312'] = $pane;
  $display->panels['left_'][0] = 'new-e2a0781e-1916-4c8b-a8e0-c8084c458312';
  $pane = new stdClass();
  $pane->pid = 'new-b7a60eef-3c19-41bb-9740-1a4eba25ff57';
  $pane->panel = 'left_slider';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-get-help';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b7a60eef-3c19-41bb-9740-1a4eba25ff57';
  $display->content['new-b7a60eef-3c19-41bb-9740-1a4eba25ff57'] = $pane;
  $display->panels['left_slider'][0] = 'new-b7a60eef-3c19-41bb-9740-1a4eba25ff57';
  $pane = new stdClass();
  $pane->pid = 'new-def33d95-2d4e-4dc6-90b8-53e52b960cd1';
  $pane->panel = 'left_slider';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-faculty';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'def33d95-2d4e-4dc6-90b8-53e52b960cd1';
  $display->content['new-def33d95-2d4e-4dc6-90b8-53e52b960cd1'] = $pane;
  $display->panels['left_slider'][1] = 'new-def33d95-2d4e-4dc6-90b8-53e52b960cd1';
  $pane = new stdClass();
  $pane->pid = 'new-ed82e48c-0550-46cc-9c81-af5db449fdb3';
  $pane->panel = 'notices';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit any notice content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Notices Administration Links',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<span class="label secondary">
  <a href="/node/add/notice">+ Add Notice</a>
</span>
<span class="label secondary">
  <a href="/admin/content/notices">Manage Notices</a>
</span>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-notices-admin-links-panel-pane',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ed82e48c-0550-46cc-9c81-af5db449fdb3';
  $display->content['new-ed82e48c-0550-46cc-9c81-af5db449fdb3'] = $pane;
  $display->panels['notices'][0] = 'new-ed82e48c-0550-46cc-9c81-af5db449fdb3';
  $pane = new stdClass();
  $pane->pid = 'new-e229a223-0dd1-4eb5-8a0b-2844daee8ef3';
  $pane->panel = 'notices';
  $pane->type = 'views_panes';
  $pane->subtype = 'notices-panel_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e229a223-0dd1-4eb5-8a0b-2844daee8ef3';
  $display->content['new-e229a223-0dd1-4eb5-8a0b-2844daee8ef3'] = $pane;
  $display->panels['notices'][1] = 'new-e229a223-0dd1-4eb5-8a0b-2844daee8ef3';
  $pane = new stdClass();
  $pane->pid = 'new-28bf038d-4e4c-4161-95d5-d88432337300';
  $pane->panel = 'right_';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'friends',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '28bf038d-4e4c-4161-95d5-d88432337300';
  $display->content['new-28bf038d-4e4c-4161-95d5-d88432337300'] = $pane;
  $display->panels['right_'][0] = 'new-28bf038d-4e4c-4161-95d5-d88432337300';
  $pane = new stdClass();
  $pane->pid = 'new-f78a2e14-04c9-4301-b97a-460459e52c86';
  $pane->panel = 'right_box';
  $pane->type = 'block';
  $pane->subtype = 'views-quick_links-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f78a2e14-04c9-4301-b97a-460459e52c86';
  $display->content['new-f78a2e14-04c9-4301-b97a-460459e52c86'] = $pane;
  $display->panels['right_box'][0] = 'new-f78a2e14-04c9-4301-b97a-460459e52c86';
  $pane = new stdClass();
  $pane->pid = 'new-22d15812-c80f-4c41-bd40-69748a30d313';
  $pane->panel = 'services';
  $pane->type = 'block';
  $pane->subtype = 'views-home_services-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '22d15812-c80f-4c41-bd40-69748a30d313';
  $display->content['new-22d15812-c80f-4c41-bd40-69748a30d313'] = $pane;
  $display->panels['services'][0] = 'new-22d15812-c80f-4c41-bd40-69748a30d313';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
