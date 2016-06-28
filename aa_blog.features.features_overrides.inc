<?php
/**
 * @file
 * aa_blog.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function aa_blog_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.comment-comment_node_aa_blog_page-field_oa_related.settings|bundle_weights"] = array();
  $overrides["field_instance.node-aa_blog_page-field_oa_related.settings|bundle_weights"] = array();

 return $overrides;
}
