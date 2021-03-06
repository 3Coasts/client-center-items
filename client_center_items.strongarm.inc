<?php
/**
 * @file
 * client_center_items.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function client_center_items_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_client_center_item';
  $strongarm->value = array();
  $export['menu_options_client_center_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_client_center_item';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_client_center_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_client_center_item';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_client_center_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_client_center_item';
  $strongarm->value = '1';
  $export['node_preview_client_center_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_client_center_item';
  $strongarm->value = 0;
  $export['node_submitted_client_center_item'] = $strongarm;

  return $export;
}
