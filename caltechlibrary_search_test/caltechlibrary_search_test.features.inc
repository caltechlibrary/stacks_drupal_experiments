<?php
/**
 * @file
 * caltechlibrary_search_test.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function caltechlibrary_search_test_default_search_api_index() {
  $items = array();
  $items['site'] = entity_import('search_api_index', '{
    "name" : "Site",
    "machine_name" : "site",
    "description" : null,
    "server" : "local",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "directory_listing",
          "webform",
          "event",
          "library_branch",
          "news",
          "software",
          "page"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_first_name_listing" : { "type" : "text" },
        "field_job_title_listing" : { "type" : "text" },
        "field_last_name_listing" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function caltechlibrary_search_test_default_search_api_server() {
  $items = array();
  $items['local'] = entity_import('search_api_server', '{
    "name" : "Local",
    "machine_name" : "local",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : { "site" : {
          "title" : {
            "table" : "search_api_db_site_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_first_name_listing" : {
            "table" : "search_api_db_site_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_last_name_listing" : {
            "table" : "search_api_db_site_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_title_listing" : {
            "table" : "search_api_db_site_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_site",
            "column" : "search_api_language_1",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_site_text_1",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
