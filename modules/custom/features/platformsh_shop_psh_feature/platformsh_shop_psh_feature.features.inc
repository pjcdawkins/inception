<?php
/**
 * @file
 * platformsh_shop_psh_feature.features.inc
 */

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
