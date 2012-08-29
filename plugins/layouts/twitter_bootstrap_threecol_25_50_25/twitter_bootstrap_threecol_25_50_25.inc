<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Twitter bootstrap Three column 25/50/25'),
  'category' => t('Columns: 3'),
  'icon' => 'twitter_bootstrap_threecol_25_50_25.png',
  'theme' => 'twitter_bootstrap_threecol_25_50_25',
  'theme arguments' => array('id', 'content'),
  'css' => 'twitter_bootstrap_threecol_25_50_25.css',
  'regions' => array(
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side')
  ),
);