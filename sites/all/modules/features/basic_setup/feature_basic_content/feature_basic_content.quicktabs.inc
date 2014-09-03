<?php
/**
 * @file
 * feature_basic_content.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_basic_content_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_content';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'draggable_views',
      'display' => 'block',
      'args' => 'content',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'draggable_views',
      'display' => 'block_1',
      'args' => 'content',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Content');
  t('Sort/Edit');

  $export['draggable_views_content'] = $quicktabs;

  return $export;
}
