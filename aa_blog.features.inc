<?php
/**
 * @file
 * aa_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aa_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function aa_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function aa_blog_field_default_field_instances_alter(&$data) {
  if (isset($data['comment-comment_node_aa_blog_page-field_oa_related'])) {
    $data['comment-comment_node_aa_blog_page-field_oa_related']['settings']['bundle_weights'] = array(); /* WAS: '' */
  }
  if (isset($data['node-aa_blog_page-field_oa_related'])) {
    $data['node-aa_blog_page-field_oa_related']['settings']['bundle_weights'] = array(); /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function aa_blog_node_info() {
  $items = array(
    'aa_blog_page' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('An Academic Atrium Blog post'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
