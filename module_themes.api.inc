<?php

/**
 * Implementation of hook_module_themes_api().
 */
function module_themes_module_themes_api() {
  return array(

    // standard version number
    'version' => 1,

    // list of hooks we're interested in replacing
    'hooks' => array(
      'node',
    ),

    // path to files we want scanned (relative to module base)
    'template path' => 'templates',
    
  );
}