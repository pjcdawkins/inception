<?php
/**
 * @file
 * platformsh_shop_psh_feature.features.inc
 */

/**
 * Implements hook_default_cl_billing_cycle_type().
 */
function platformsh_shop_psh_feature_default_cl_billing_cycle_type() {
  $items = array();
  $items['monthly_async'] = entity_import('cl_billing_cycle_type', '{
    "engine" : "periodic",
    "name" : "monthly_async",
    "title" : "Monthly",
    "prepaid" : null,
    "wrapper" : {},
    "pce_period" : { "und" : [ { "value" : "month" } ] },
    "pce_async" : { "und" : [ { "value" : "1" } ] }
  }');
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function platformsh_shop_psh_feature_commerce_product_default_types() {
  $items = array(
    'platformsh_subscription' => array(
      'type' => 'platformsh_subscription',
      'name' => 'Platform.sh Subscription',
      'description' => 'A subscription to <a href="https://platform.sh/">Platform.sh</a>',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function platformsh_shop_psh_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function platformsh_shop_psh_feature_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product display'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
