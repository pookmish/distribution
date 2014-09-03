<?php
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'dragview_content';
$context->description = 'Basic Blocks for the \'Content\' Region';
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
      'quicktabs-draggable_views_main_content' => array(
        'module' => 'quicktabs',
        'delta' => 'draggable_views_main_content',
        'region' => 'content',
        'weight' => '10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Basic Blocks Views');
t('Basic Blocks for the \'Content\' Region');
