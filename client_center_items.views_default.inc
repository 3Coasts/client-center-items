<?php
/**
 * @file
 * client_center_items.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function client_center_items_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'client_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Client Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_external_link' => 'field_external_link',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_external_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_external_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_external_link']['element_class'] = 'wgo-client-resource-link';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_wrapper_class'] = 'wgo-client-resource-wrapper';
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_external_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_external_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_external_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_category']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client_center_item' => 'client_center_item',
  );

  /* Display: Client Resources */
  $handler = $view->new_display('panel_pane', 'Client Resources', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Insurance Quotes */
  $handler = $view->new_display('panel_pane', 'Insurance Quotes', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_external_link' => 'field_external_link',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'client_center_item' => 'client_center_item',
  );
  /* Filter criterion: Content: Is this a Quote? (field_is_quote) */
  $handler->display->display_options['filters']['field_is_quote_value']['id'] = 'field_is_quote_value';
  $handler->display->display_options['filters']['field_is_quote_value']['table'] = 'field_data_field_is_quote';
  $handler->display->display_options['filters']['field_is_quote_value']['field'] = 'field_is_quote_value';
  $handler->display->display_options['filters']['field_is_quote_value']['value'] = array(
    1 => '1',
  );
  $export['client_resources'] = $view;

  return $export;
}
