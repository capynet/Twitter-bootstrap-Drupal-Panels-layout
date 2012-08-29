<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Twitter bootstrap Single column'),
  'category' => t('Columns: 1'),
  'icon' => 'twitter_bootstrap_onecol.png',
  'theme' => 'twitter_bootstrap_onecol',
  'css' => 'twitter_bootstrap_onecol.css',
  'regions' => array('middle' => t('Middle column')),
);
