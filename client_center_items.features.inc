<?php
/**
 * @file
 * client_center_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function client_center_items_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function client_center_items_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function client_center_items_node_info() {
  $items = array(
    'client_center_item' => array(
      'name' => t('Client Center Item'),
      'base' => 'node_content',
      'description' => t('Client Center Items are usually links to forms for clients to use.  These are divided into categories, such as Personal Lines, Commercial Lines, and Miscellaneous.  These links are displayed on the "Client Resources" page.  If "Is this a Quote?" is checked, the item will also be displayed on the "Get Insurance Quotes" page.'),
      'has_title' => '1',
      'title_label' => t('Item Name'),
      'help' => '',
    ),
  );
  return $items;
}
