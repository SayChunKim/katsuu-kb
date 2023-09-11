#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT_love(
        KC_KB_VOLUME_DOWN, KC_KB_MUTE, KC_KB_VOLUME_UP, 
        KC_L,KC_O,KC_V,KC_E
    ),
    [1] = LAYOUT_love(
        _______, _______, _______,\
        _______, _______, _______,_______,\
        
    
    ),
    [2] = LAYOUT_love(
        _______, _______, _______,\
        _______, _______, _______,_______,\
    
    ),
    [3] = LAYOUT_love(
        _______, _______, _______,\
        _______, _______, _______,_______,\

    ),
};