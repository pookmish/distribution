<?php
/**
 * @file
 * Defines custom formatters
 */
/**
 * Theme function for the 'direct_download' multiple file formatter.
 *
 * @param $file
 *   File to format.
 * @return
 *   A string containing the HTML ouput.
 */
function theme_media_displays_download_file_alt($variables) {
  $output = '';
  foreach ($variables['items'] as $delta => $file) {
    if (!empty($file)) {
      $link_field = $variables['settings']['link_field'];
      $title_field = $variables['settings']['title_field'];

      // Views may call this function with a NULL value, return an empty string.
      if (empty($file['fid'])) {
        return '';
      }

      if (isset($file[$link_field]) && !empty($file[$link_field])) {
        $link_text = $file[$link_field][LANGUAGE_NONE][0]['value'];
      }
      else {
        $link_text = $file['filename'];
      }

      if (isset($file[$title_field]) && !empty($file[$title_field])) {
        $title_text = $file[$title_field][LANGUAGE_NONE][0]['value'];
      }
      else {
        $title_text = $file['filename'];
      }
      $output .= '<span class="media-element">' . l($link_text, file_create_url($file['uri']), array('attributes' => array('title' => $title_text))) . '</span>';
    }
  }
  return $output;
}