<?php
/**
 * @file
 * my_module.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function my_module_views_default_views() {
  //$export = array();

  $view = new view();
  $view->name = 'user_entries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Entries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date_of_birth' => 'field_date_of_birth',
    'field_email_address' => 'field_email_address',
    'field_full_name' => 'field_full_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birth' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_full_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date Of Birth */
  $handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
  $handler->display->display_options['fields']['field_date_of_birth']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_birth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_date_of_birth']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birth']['field_api_classes'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['field_api_classes'] = TRUE;
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'user_entry' => 'user_entry',
  );
  
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-entries';
  
  $export['user_entries'] = $view;

  return $export;
}
