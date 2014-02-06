<?php
/**
 * @file
 * client_center_items.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function client_center_items_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-client_center_item-field_category'
  $field_instances['node-client_center_item-field_category'] = array(
    'bundle' => 'client_center_item',
    'default_value' => array(
      0 => array(
        'target_id' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-client_center_item-field_external_link'
  $field_instances['node-client_center_item-field_external_link'] = array(
    'bundle' => 'client_center_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the text to be displayed into the "Title" field, and enter the full link into the URL field.  The link must start with "http://" or "https://".',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_external_link',
    'label' => 'Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-client_center_item-field_is_quote'
  $field_instances['node-client_center_item-field_is_quote'] = array(
    'bundle' => 'client_center_item',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If this link is to a quote form, check this box.  This will cause the link to appear on the Quotes page.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_quote',
    'label' => 'Is this a Quote?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Enter the text to be displayed into the "Title" field, and enter the full link into the URL field.  The link must start with "http://" or "https://".');
  t('If this link is to a quote form, check this box.  This will cause the link to appear on the Quotes page.');
  t('Is this a Quote?');
  t('Link');

  return $field_instances;
}
