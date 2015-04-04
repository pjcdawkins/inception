<?php
/**
 * @file
 * platformsh_shop_psh_feature.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function platformsh_shop_psh_feature_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Platform.sh Subscription',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7bac187c-2e6f-47df-ac4e-290ad8c37b9d',
  'type' => 'product_display',
  'language' => 'und',
  'created' => 1428164437,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c288f4c9-3e81-4d07-a567-958ddada34d3',
  'revision_uid' => 1,
  'body' => array(),
  'field_node_product' => array(
    'und' => array(
      0 => array(
        'product_id' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-04-04 17:20:37 +0100',
);
  return $nodes;
}
