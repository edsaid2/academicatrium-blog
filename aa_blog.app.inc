<?php
/**
 * @file
 * Provides app info for aa blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function aa_blog_apps_app_info() {
  $permissions = array();
  $permissions['node:oa_group:create aa_blog_page content'] = array(
    'administrator member' => 'administrator member',
    'member' => 'member',
  );
  $permissions['node:oa_space:create aa_blog_page content'] = array(
    'administrator member' => 'administrator member',
    'member' => 'member',
  );

  return array(
    'og permissions' => $permissions,
  );
}
