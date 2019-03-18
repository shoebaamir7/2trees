<?php

function menu_magic_extra($wildcard) {
  $content = [
    '#type' => 'markup',
    '#markup' => '<p>'
      .t('The argument contains the value %wildcard', ['%wildcard' => $wildcard]).
      '</p>'
  ];

  return $content;
}
