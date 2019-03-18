<?php

function menu_magic_node_user($node)
{
    $content = [
      '#type' => 'markup',
      '#markup' => '<p>'.t('Great!!! '.$node->body['und'][0]['value']).'</p>'
    ];

    return $content;
}
