<?php

/**
 * @file
 * Defines products to sell Platform.sh subscriptions.
 */

/**
 * Defines products that will be created during installation.
 *
 * @return array
 *   An array of product entities, keyed by product type.
 */
function platformsh_shop_psh_feature_product_definition() {
  return array(
    'platformsh_subscription' => array(
      'PLATFORMSH-SUBSCRIPTION' => array(
        'title' => 'Platform.sh Subscription',
        'commerce_price' => array(
          'amount' => 1000,
          'currency_code' => 'EUR',
        ),
        'status' => 1,
        'uid' => 1,
        'commerce_license_type' => 'platformsh_subscription',
        'commerce_license_duration' => 0,
        'cl_billing_type' => 'postpaid',
      ),
    ),
  );
}

/**
 * Create default products.
 */
function platformsh_shop_psh_feature_create_default_products() {
  foreach (platformsh_shop_psh_feature_product_definition() as $product_type => $products) {
    foreach ($products as $sku => $product_info) {
      if ($product = commerce_product_load_by_sku($sku)) {
        $original = clone $product;
      }
      else {
        $original = NULL;
        $product = commerce_product_new($product_type);
        $product->sku = $sku;
      }
      $product_wrapper = entity_metadata_wrapper('commerce_product', $product);
      foreach ($product_info as $property => $value) {
        if (is_array($value)) {
          foreach ($value as $sub_property => $sub_value) {
            $product_wrapper->$property->$sub_property = $sub_value;
          }
        }
        else {
          $product_wrapper->$property = $value;
        }
      }

      // The billing cycle has to be set by ID, not by name.
      if ($product_type == 'platformsh_subscription') {
        if ($cycle_type = entity_load_single('cl_billing_cycle_type', 'monthly_async')) {
          $product->cl_billing_cycle_type[LANGUAGE_NONE][0]['target_id'] = $cycle_type->billing_cycle_type_id;
        }
      }

      if (!isset($original) || $original != $product) {
        $product->revision = FALSE;
        $product_wrapper->save();
      }
    }
  }
}
