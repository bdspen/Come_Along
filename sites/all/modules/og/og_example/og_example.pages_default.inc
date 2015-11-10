<?php
/**
 * @file
 * og_example.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function og_example_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Group',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => array(
            'is_group_content' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9ca28b33-bb85-4123-a565-ec93d8bde231';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9df59b3d-9af4-48f1-99a3-cdaeae759406';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Group articles',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '9df59b3d-9af4-48f1-99a3-cdaeae759406';
    $display->content['new-9df59b3d-9af4-48f1-99a3-cdaeae759406'] = $pane;
    $display->panels['left'][0] = 'new-9df59b3d-9af4-48f1-99a3-cdaeae759406';
    $pane = new stdClass();
    $pane->pid = 'new-0181d299-5c4e-441c-9d2f-4ed2bc3291fc';
    $pane->panel = 'right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'field_name' => 'og_group_ref',
      'types' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '0181d299-5c4e-441c-9d2f-4ed2bc3291fc';
    $display->content['new-0181d299-5c4e-441c-9d2f-4ed2bc3291fc'] = $pane;
    $display->panels['right'][0] = 'new-0181d299-5c4e-441c-9d2f-4ed2bc3291fc';
    $pane = new stdClass();
    $pane->pid = 'new-288a3523-b9d9-427d-8421-853b9c3a6920';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => 'Members',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '288a3523-b9d9-427d-8421-853b9c3a6920';
    $display->content['new-288a3523-b9d9-427d-8421-853b9c3a6920'] = $pane;
    $display->panels['right'][1] = 'new-288a3523-b9d9-427d-8421-853b9c3a6920';
    $pane = new stdClass();
    $pane->pid = 'new-491b8155-aa86-4079-8a4e-c9da51d661e7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'og_group_subscribe',
      'formatter_settings' => array(
        'field_name' => 'og_user_group_ref',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '491b8155-aa86-4079-8a4e-c9da51d661e7';
    $display->content['new-491b8155-aa86-4079-8a4e-c9da51d661e7'] = $pane;
    $display->panels['right'][2] = 'new-491b8155-aa86-4079-8a4e-c9da51d661e7';
    $pane = new stdClass();
    $pane->pid = 'new-66916f73-500e-4204-a41b-fcf06ca0ec6f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '66916f73-500e-4204-a41b-fcf06ca0ec6f';
    $display->content['new-66916f73-500e-4204-a41b-fcf06ca0ec6f'] = $pane;
    $display->panels['top'][0] = 'new-66916f73-500e-4204-a41b-fcf06ca0ec6f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
