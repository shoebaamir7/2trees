<?php

function form_fun_tree($form, &$form_state) {

  $form['#tree'] = TRUE;
  $form['home'] = [
    '#type' => 'fieldset',
    '#title' => t('Home Address')
  ];

  $form['home']['streetAddress'] = [
    '#type' => 'textfield',
    '#title' => 'Street Address'
  ];

  $form['home']['city'] = [
    '#type' => 'textfield',
    '#title' => 'city'
  ];

  $form['work'] = [
    '#type' => 'fieldset',
    '#title' => t('Work Address')
  ];

  $form['work']['streetAddress'] = [
    '#type' => 'textfield',
    '#title' => 'Street Address'
  ];

  $form['work']['city'] = [
    '#type' => 'textfield',
    '#title' => 'city'
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => 'Submit'
  ];

  return $form;
}

function form_fun_tree_submit($form, &$form_state) {
  dsm($form_state['values']);
}