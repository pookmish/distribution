<?php
/**
 * @file
 * feature_basic_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_basic_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'draggable_views_content';
  $context->description = ' Basic Blocks for the \'Content\' Region';
  $context->tag = 'Basic Blocks Views';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-draggable_views_content' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_content',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t(' Basic Blocks for the \'Content\' Region');
  t('Basic Blocks Views');
  $export['draggable_views_content'] = $context;

  return $export;
}
