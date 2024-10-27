// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// CONSUME <> ENHANCE <> REPLICATE

//Save for Joystick Button
//{"matrix": [3, 0], "x": 0, "y": 3},

#include QMK_KEYBOARD_H
#include <keyboard.h> 
//TODO: Add OS detection so COPY/PASTE WORKS ON WINDOWS


enum combos {
    GAME
};

const uint16_t PROGMEM game_combo[] = {KC_F1,KC_F2,KC_F3, COMBO_END};
combo_t key_combos[] = {
    COMBO(game_combo, TO(2))
};


enum tap_dance {
    TD_PARENTHESIS
};

tap_dance_action_t tap_dance_actions[] = {
    // Tap once for (, twice for )
    [TD_PARENTHESIS] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN)
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC, KC_1, KC_2,   KC_3,   KC_4,   KC_5,                  KC_6, KC_7, KC_8,     KC_9,   KC_0,    KC_BSPC,
        KC_TAB,  KC_Q, KC_W,   KC_E,   KC_R,   KC_T,        KC_RALT,  KC_Y, KC_U, KC_I,     KC_O,   KC_P,    KC_BSLS,
        KC_LGUI, KC_A, KC_S,   KC_D,   KC_F,   KC_G,        KC_RGUI,  KC_H, KC_J, KC_K,     KC_L,   KC_SCLN, KC_QUOTE,
        KC_LCTL, KC_Z, KC_X,   KC_C,   KC_V,   KC_B,        KC_RCTL,  KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_RCTL,

        KC_LEFT, KC_RIGHT, KC_SPACE,   KC_LSFT, KC_ENTER,   KC_ENTER, KC_RSFT, KC_SPACE, KC_UP, KC_DOWN,                         
                                       KC_BSPC, MO(1),      MO(1), KC_BSPC                       
    ),

    [1] = LAYOUT(
        _______, KC_F1, KC_F2, KC_F3,  KC_F4,  KC_F5,                  KC_F6,    KC_F7,   KC_F8,    KC_F9,   KC_F10,                KC_F11,
        _______, KC_Q,  KC_W,   KC_E,   KC_R,   KC_T,        _______,  KC_MINS,  KC_EQL,  KC_LBRC,  KC_RBRC, TD(TD_PARENTHESIS),    _______,
        _______, KC_A,  KC_S,   KC_D,   KC_F,   KC_G,        _______,  KC_H,     KC_J,    KC_K,     KC_L,    KC_SCLN,               KC_QUOTE,
        _______, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,        _______,  KC_N,     KC_M,    KC_COMMA, KC_DOT,  KC_SLSH,               KC_RCTL,

        _______, _______, _______,     KC_LSFT, KC_ENTER,    KC_ENTER, KC_RSFT, KC_SPACE, KC_UP, KC_DOWN,                         
                                       KC_BSPC, _______,     _______, KC_BSPC                       
    ),
    //Layer For Games
    [2] = LAYOUT(
        _______, KC_F1,   KC_1,   KC_2,   KC_3,   KC_4,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_TAB,  KC_M,    KC_Q,   KC_W,   KC_E,   KC_R,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LALT, KC_LSFT, KC_A,   KC_S,   KC_D,   KC_F,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_HOME, KC_LCTL, KC_Z,   KC_X,   KC_C,   KC_B,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,

        KC_LBRC, KC_RBRC, KC_SPACE,    KC_H, KC_Z,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         
                                       KC_V, KC_B,             XXXXXXX, XXXXXXX     
    )
    

};

#ifdef OLED_ENABLE

// Rotate OLED
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;  
}

// Draw to OLED
bool oled_task_user() {
    // Set cursor position
    oled_set_cursor(0, 1);
    
    // Write text to OLED
    oled_write("Hello World!", false);
    
    return false;
}

#endif
