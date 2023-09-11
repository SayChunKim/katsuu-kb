#include QMK_KEYBOARD_H
// #include "saintquartz.h"
// #include "voidsea.h"
// #include "sewing.h"
// #include "shizukuwink.h"
#include "tunguska.h"
// #include "fou.h"

extern uint8_t is_master;
static uint16_t oled_timer = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        KC_VOLD, KC_ESC, KC_VOLU, KC_NO, 
        KC_L, KC_O, KC_V, KC_E
    ),
    [1] = LAYOUT(
        _______, QK_BOOT, _______,_______,\
        _______, _______, _______,_______\
        
    
    ),
    [2] = LAYOUT(
        _______, _______, _______,_______,\
        _______, _______, _______,_______\
    
    ),
    [3] = LAYOUT(
        _______, _______, _______,_______,\
        _______, _______, _______,_______\

    ),
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
        tap_code(dynamic_keymap_get_keycode(biton32(layer_state), 0, 0));
    } else {
        tap_code(dynamic_keymap_get_keycode(biton32(layer_state), 0, 2));
    }
  }
  return true;
}
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

void render_animation(uint8_t frame) {
    // oled_write_raw_P(voidsea[frame], sizeof(voidsea[frame]));
    // oled_write_raw_P(shizuku[frame], sizeof(shizuku[frame]));
    oled_write_raw_P(tunguska[frame], sizeof(tunguska[frame]));
    // oled_write_raw_P(fou[frame], sizeof(fou[frame]));
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        oled_timer = timer_read();
    }
    return true;
}


bool oled_task_user(void) {

    // render_animation((timer_read() / 180) % 8);
    // render_animation((timer_read() / 180) % 4);
    // render_animation((timer_read() / 60) % 1);
    // render_animation((timer_read() / 48) % 41);
    render_animation((timer_read() / 60) % 60);
    return false;
    
}
#endif