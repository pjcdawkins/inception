<?php
/**
 * @file
 * platformsh_shop_psh_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function platformsh_shop_psh_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bundleswitcher__cl_billing_cycle_type';
  $strongarm->value = TRUE;
  $export['bundleswitcher__cl_billing_cycle_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_line_item_types';
  $strongarm->value = array(
    'product' => 'product',
  );
  $export['commerce_license_line_item_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_product_types';
  $strongarm->value = array(
    'platformsh_subscription' => 'platformsh_subscription',
    'product' => 0,
  );
  $export['commerce_license_product_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_refresh_rate';
  $strongarm->value = '2';
  $export['commerce_license_refresh_rate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_license_refresh_timeout';
  $strongarm->value = '60';
  $export['commerce_license_refresh_timeout'] = $strongarm;

  return $export;
}
