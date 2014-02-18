<?php
/**
 * @file
 * client_center_items.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function client_center_items_taxonomy_default_vocabularies() {
  return array(
    'product_categories' => array(
      'name' => 'Product Categories',
      'machine_name' => 'product_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
