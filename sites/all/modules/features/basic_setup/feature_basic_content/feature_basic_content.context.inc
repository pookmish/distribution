<?php
/**
 * @file
 * feature_basic_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_basic_content_context_default_contexts() {
  $regions = variable_get('menu_block_placement_regions');
  $export = array();
  if (isset($regions)) {
    $context = new stdClass();
    $context->disabled = FALSE;
    $context->api_version = 3;
    $context->name = 'dragview_basic_blocks';
    $context->description = 'Basic Blocks for the theme enabled regions';
    $context->tag = 'Basic Setup';
    $context->conditions = array(
      'path' => array(
        'values' => array(
          '~node/*/*' => '~node/*/*',
        ),
      ),
      'sitewide' => array(
        'values' => array(
          1 => 1,
        ),
      ),
    );
    $context->reactions = array(
      'block' => array(
        'blocks' => array(),
      ),
    );

    foreach ($regions as $key => $label) {
      $context->reactions['block']['blocks']['quicktabs-dragview_' . $key] = array(
        'module' => 'quicktabs',
        'delta' => 'dragview_' . $key,
        'region' => $key,
        'weight' => '10',
      );
    }

    $context->condition_mode = 1;

    // Translatables
    // Included for use with string extractors like potx.
    t(' Basic Blocks for the \'' . $label . '\' Region');
    t('Basic Blocks Views');
    $export[$context->name] = $context;

  }

return $export;
}
