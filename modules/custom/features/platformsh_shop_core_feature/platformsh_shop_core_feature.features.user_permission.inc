<?php
/**
 * @file
 * platformsh_shop_core_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function platformsh_shop_core_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
