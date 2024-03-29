<?php
/**
 * @file
 * finalist_feature_node_type_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function finalist_feature_node_type_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function finalist_feature_node_type_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Pagina'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
