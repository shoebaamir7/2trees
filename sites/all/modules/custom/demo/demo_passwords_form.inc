<?php

function demo_passwords_form($form, &$form_state) {
  $form['demo_badpasswords'] = [
    '#type' => 'textfield',
    '#title' => t('Bad Passwords'),
    '#description' => t('Enter a list of bad passwords separated by commas.'),
    '#default_value' => variable_get('demo_badpasswords')
  ];

  return system_settings_form($form);
}