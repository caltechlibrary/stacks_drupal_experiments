<?php
/**
 * @file
 * caltechlibrary_journals_index.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function caltechlibrary_journals_index_default_search_api_index() {
  $items = array();
  $items['caltechlibrary_journals'] = entity_import('search_api_index', '{
    "name" : "Caltech Library Journals",
    "machine_name" : "caltechlibrary_journals",
    "description" : "Index of Journals for the Caltech Library A\\u2013Z List.",
    "server" : "solr",
    "item_type" : "journal",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "1000",
      "fields" : {
        "coverage_begin" : { "type" : "text" },
        "coverage_end" : { "type" : "text" },
        "coverage_note" : { "type" : "text" },
        "description" : { "type" : "text", "boost" : "5.0" },
        "keywords" : { "type" : "text", "boost" : "5.0" },
        "package" : { "type" : "string" },
        "publisher" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_aggregation_2" : { "type" : "text" },
        "search_api_aggregation_3" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "sn_online" : { "type" : "text" },
        "sn_print" : { "type" : "text" },
        "title" : { "type" : "string" },
        "url" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "search_api_aggregation_1" : {
                "name" : "Title (fulltext)",
                "type" : "fulltext",
                "fields" : [ "title" ],
                "description" : "A Fulltext aggregation of the following fields: Title."
              },
              "search_api_aggregation_2" : {
                "name" : "Package (fulltext)",
                "type" : "fulltext",
                "fields" : [ "package" ],
                "description" : "A Fulltext aggregation of the following fields: Package."
              },
              "search_api_aggregation_3" : {
                "name" : "Publisher (fulltext)",
                "type" : "fulltext",
                "fields" : [ "publisher" ],
                "description" : "A Fulltext aggregation of the following fields: Publisher."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "alt_title" : true,
              "publisher" : true,
              "sn_print" : true,
              "sn_online" : true,
              "description" : true,
              "keywords" : true,
              "search_api_aggregation_1" : true,
              "search_api_aggregation_3" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "unique_id" : true,
              "kbid" : true,
              "title" : true,
              "alt_title" : true,
              "platform" : true,
              "package" : true,
              "url" : true,
              "publisher" : true,
              "sn_print" : true,
              "sn_online" : true,
              "coverage_begin" : true,
              "coverage_end" : true,
              "coverage_note" : true,
              "description" : true,
              "keywords" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "unique_id" : true,
              "kbid" : true,
              "alt_title" : true,
              "url" : true,
              "sn_print" : true,
              "sn_online" : true,
              "coverage_begin" : true,
              "coverage_end" : true,
              "coverage_note" : true,
              "description" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "alt_title" : true,
              "publisher" : true,
              "sn_print" : true,
              "sn_online" : true,
              "description" : true,
              "keywords" : true,
              "search_api_aggregation_1" : true,
              "search_api_aggregation_3" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "alt_title" : true,
              "package" : true,
              "publisher" : true,
              "keywords" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
