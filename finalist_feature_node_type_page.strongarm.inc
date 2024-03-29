<?php
/**
 * @file
 * finalist_feature_node_type_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function finalist_feature_node_type_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = '2';
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '1';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '0';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 0;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'home' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'carousel' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'pantera_custom_author' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'pantera_custom_fullname' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'pantera_custom_fullname_link' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'pantera_custom_read_more' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'carousel' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'pantera_custom_postdate_ago' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'pantera_custom_node_type' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '0';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '0';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = 'nieuws/[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_page';
  $strongarm->value = 'Opslaan en velden toevoegen';
  $export['save_continue_page'] = $strongarm;

  return $export;
}
