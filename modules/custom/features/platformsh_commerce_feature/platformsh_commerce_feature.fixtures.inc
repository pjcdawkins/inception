<?php

/**
 * @file
 * Define hard-to-export things that can be created on installation.
 */

/**
 * Define default nodes.
 */
function platformsh_commerce_feature_default_node_definition() {
  $nodes = array();
  $product = commerce_product_load_by_sku('PLATFORMSH-SUBSCRIPTION');
  $nodes[] = array(
    'type' => 'product_display',
    'title' => 'Platform.sh Subscription',
    'body' => array(
      'value' => 'Buy a Platform.sh Subscription',
    ),
    'field_node_product' => $product->product_id,
    'status' => 1,
  );

  return $nodes;
}

/**
 * Create default nodes.
 */
function platformsh_commerce_feature_create_default_nodes() {
  $node_definitions = platformsh_commerce_feature_default_node_definition();
  foreach ($node_definitions as $node_definition) {
    $node = entity_create('node', array('type' => $node_definition['type']));
    $node_wrapper = entity_metadata_wrapper('node', $node);
    foreach ($node_definition as $property => $value) {
      if (is_array($value)) {
        foreach ($value as $sub_property => $sub_value) {
          $node_wrapper->$property->$sub_property = $sub_value;
        }
      }
      else {
        $node_wrapper->$property = $value;
      }
    }
    $node_wrapper->save();
  }
}
