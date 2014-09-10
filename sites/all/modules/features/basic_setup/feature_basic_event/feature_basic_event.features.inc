<?php
/**
 * @file
 * feature_basic_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_basic_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_basic_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_basic_event_node_info() {
  $items = array(
    'basic_event' => array(
      'name' => t('Basic Event'),
      'base' => 'node_content',
      'description' => t('Basic event type to be used in a calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
