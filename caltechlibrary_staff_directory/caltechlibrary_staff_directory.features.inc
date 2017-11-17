<?php
/**
 * @file
 * caltechlibrary_staff_directory.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function caltechlibrary_staff_directory_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'node'
  $workflows['node'] = entity_import('Workflow', '{
    "name" : "node",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "6" : {"sid":"6","wid":"6","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "11" : {"sid":"11","wid":"6","weight":"-19","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "21" : {"sid":"21","wid":"6","weight":"-18","sysid":"0","state":"Needs Review","status":"1","name":"needs_review"},
      "26" : {"sid":"26","wid":"6","weight":"-17","sysid":"0","state":"Reviewed","status":"1","name":"reviewed"},
      "31" : {"sid":"31","wid":"6","weight":"-16","sysid":"0","state":"Published","status":"1","name":"published"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"6","target_sid":"11","roles":{"-1":-1,"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"6_11","label":"","rdf_mapping":[]},
      "46" : {"tid":"46","sid":"6","target_sid":"21","roles":{"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"6_21","label":"","rdf_mapping":[]},
      "51" : {"tid":"51","sid":"6","target_sid":"26","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"6_26","label":"","rdf_mapping":[]},
      "56" : {"tid":"56","sid":"6","target_sid":"31","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"6_31","label":"","rdf_mapping":[]},
      "6" : {"tid":"6","sid":"11","target_sid":"11","roles":{"-1":-1,"1":1,"2":2,"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"11_11","label":"","rdf_mapping":[]},
      "31" : {"tid":"31","sid":"11","target_sid":"21","roles":{"-1":-1,"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"11_21","label":"","rdf_mapping":[]},
      "96" : {"tid":"96","sid":"11","target_sid":"26","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"11_26","label":"","rdf_mapping":[]},
      "101" : {"tid":"101","sid":"11","target_sid":"31","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"11_31","label":"","rdf_mapping":[]},
      "61" : {"tid":"61","sid":"21","target_sid":"11","roles":{"86":86,"87":87,"88":88,"89":89,"91":91,"92":92},"wid":"6","name":"21_11","label":"","rdf_mapping":[]},
      "16" : {"tid":"16","sid":"21","target_sid":"21","roles":{"-1":-1,"1":1,"2":2,"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"21_21","label":"","rdf_mapping":[]},
      "36" : {"tid":"36","sid":"21","target_sid":"26","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"21_26","label":"","rdf_mapping":[]},
      "66" : {"tid":"66","sid":"21","target_sid":"31","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"21_31","label":"","rdf_mapping":[]},
      "71" : {"tid":"71","sid":"26","target_sid":"11","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"26_11","label":"","rdf_mapping":[]},
      "76" : {"tid":"76","sid":"26","target_sid":"21","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"26_21","label":"","rdf_mapping":[]},
      "21" : {"tid":"21","sid":"26","target_sid":"26","roles":{"-1":-1,"1":1,"2":2,"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"26_26","label":"","rdf_mapping":[]},
      "41" : {"tid":"41","sid":"26","target_sid":"31","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"26_31","label":"","rdf_mapping":[]},
      "81" : {"tid":"81","sid":"31","target_sid":"11","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"31_11","label":"","rdf_mapping":[]},
      "86" : {"tid":"86","sid":"31","target_sid":"21","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"31_21","label":"","rdf_mapping":[]},
      "91" : {"tid":"91","sid":"31","target_sid":"26","roles":{"86":86,"87":87,"88":88,"91":91,"92":92},"wid":"6","name":"31_26","label":"","rdf_mapping":[]},
      "26" : {"tid":"26","sid":"31","target_sid":"31","roles":{"-1":-1,"1":1,"2":2,"86":86,"87":87,"88":88,"89":89,"90":90,"91":91,"92":92},"wid":"6","name":"31_31","label":"","rdf_mapping":[]}
    },
    "label" : "Node",
    "typeMap" : [],
    "rdf_mapping" : [],
    "wid_original" : "6",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "86" : "super administrator",
      "87" : "administrator",
      "88" : "moderator",
      "89" : "editor",
      "90" : "contributor",
      "4" : "patron",
      "91" : "demo administrator",
      "92" : "LiteAdmin"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function caltechlibrary_staff_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function caltechlibrary_staff_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function caltechlibrary_staff_directory_node_info() {
  $items = array(
    'directory_listing' => array(
      'name' => t('Directory Listing'),
      'base' => 'node_content',
      'description' => t('Create listings of people and places.'),
      'has_title' => '1',
      'title_label' => t('Directory Listing Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
