<?php
/**
 * @file
 * feature_basic_content.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_basic_content_quicktabs_default_quicktabs() {
  $regions = variable_get('menu_block_placement_regions');
  $export = array();

  if (isset($regions)) {
    foreach ($regions as $key => $label) {
      $quicktabs = new stdClass();
      $quicktabs->disabled = FALSE;
      $quicktabs->api_version = 1;
      $quicktabs->machine_name = 'dragview_' . $key;
      $quicktabs->ajax = 0;
      $quicktabs->hide_empty_tabs = TRUE;
      $quicktabs->default_tab = 0;
      $quicktabs->title = 'Draggable Views ' . $label;
      $quicktabs->tabs = array(
        0 => array(
          'vid' => 'draggable_views',
          'display' => 'block',
          'args' => $key,
          'title' => 'Display',
          'weight' => '-100',
          'type' => 'view',
        ),
        1 => array(
          'vid' => 'draggable_views',
          'display' => 'block_1',
          'args' => $key,
          'title' => 'Sort/Edit',
          'weight' => '-99',
          'type' => 'view',
        ),
      );
      $quicktabs->renderer = 'quicktabs';
      $quicktabs->style = 'Zen';
      $quicktabs->options = array();


      $export[$quicktabs->machine_name] = $quicktabs;
    }
  }
  return $export;
}
