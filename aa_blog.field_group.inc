<?php
/**
 * @file
 * aa_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aa_blog_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|aa_blog_page|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aa_blog_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '2',
    'children' => array(
      0 => 'field_blog_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_notes|node|aa_blog_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_oa_access|node|aa_blog_page|form';
  $field_group->group_name = 'group_oa_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aa_blog_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access',
    'weight' => '7',
    'children' => array(
      0 => 'field_aa_blog_page_no_redirect',
      1 => 'oa_other_spaces_ref',
      2 => 'oa_section_ref',
      3 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Access',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_oa_access|node|aa_blog_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');
  t('Notes');

  return $field_groups;
}
