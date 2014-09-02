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
  $context->name = 'draggable_views';
  $context->description = '';
  $context->tag = '';
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
        'quicktabs-draggable_views_left_sidebar' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_left_sidebar',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'quicktabs-draggable_views_main_content' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_main_content',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-draggable_views_right_sidebar' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_right_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['draggable_views'] = $context;

  return $export;
}
