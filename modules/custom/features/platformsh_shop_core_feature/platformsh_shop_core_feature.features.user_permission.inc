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

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
