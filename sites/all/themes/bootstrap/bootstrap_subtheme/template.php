<?php

function bootstrap_subtheme_process_html(&$vars){
  //color module support
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}
function bootstrap_subtheme_process_page(&$vars){
  //color module support
  if (module_exists('color')) {
    _color_page_alter($vars);
  }
}
