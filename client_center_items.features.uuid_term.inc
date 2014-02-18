<?php
/**
 * @file
 * client_center_items.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function client_center_items_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Benefits',
    'description' => '',
    'format' => 'editor',
    'weight' => 0,
    'uuid' => '38b78adf-f6a7-4e22-b69d-d98ca6e357a7',
    'vocabulary_machine_name' => 'product_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'product-categories/benefits',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Misc',
    'description' => '',
    'format' => 'editor',
    'weight' => 0,
    'uuid' => 'a063e4ae-bf34-4dfb-bbf2-70f4671b7793',
    'vocabulary_machine_name' => 'product_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'product-categories/misc',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Risk Management',
    'description' => '',
    'format' => 'editor',
    'weight' => 0,
    'uuid' => 'a6399142-6abc-47ec-85fb-9df677fe1a24',
    'vocabulary_machine_name' => 'product_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'product-categories/risk-management',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Personal Insurance',
    'description' => '',
    'format' => 'editor',
    'weight' => 0,
    'uuid' => 'e32a11aa-a988-442e-b189-7e467550c329',
    'vocabulary_machine_name' => 'product_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'product-categories/personal-insurance',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Business Insurance',
    'description' => '',
    'format' => 'editor',
    'weight' => 0,
    'uuid' => 'f30f49ee-1221-4e30-b252-90f23a76ab4d',
    'vocabulary_machine_name' => 'product_categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'product-categories/business-insurance',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
