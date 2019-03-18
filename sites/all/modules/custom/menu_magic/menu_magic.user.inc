<?php

function menu_magic_user($wildcard)
{
  if(is_numeric($wildcard) && ($account = user_load($wildcard))) {
    $content = [
      '#type' => 'markup',
      '#markup' => '<p>'.t('User is totally awesome %username',['%username' => $account->name]).'</p>'
    ];

    return $content;
  } else {
    return drupal_not_found();
  }
}
