<?php

function form_fun_partner($states, &$state_form) {
  $form = [];

  $form['name'] = [
    '#type' => 'textfield',
    '#title' => 'My Name'
  ];

  $form['status'] = [
    '#type' => 'checkbox',
    '#title' => t('I have a partner')
  ];

  $form['partner'] = [
    '#type' => 'container',
    '#states' => [
      'visible' => [
        ':input[name="status"]' => ['checked' => TRUE]
      ]
    ]
  ];

  $form['partner']['name'] = [
    '#type' => 'textfield',
    '#title' => 'My partners name'
  ];

  $form['partner']['mo'] = [
    '#type' => 'select',
    '#title' => 'My partners mo',
    '#options' => [
      'first' => 'First',
      'second' => 'Second',
      'third' => 'Third',
      'fourth' => 'Fourth'
    ]
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => 'Submit'
  ];

  return $form;
}

function form_fun_partner_submit($form, &$form_state) {
  dsm($form_state['values']);
}