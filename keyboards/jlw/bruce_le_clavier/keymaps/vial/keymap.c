// Copyright 2023 jlw
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define HM_A	LGUI_T(KC_A)
#define HM_R	LALT_T(KC_R)
#define HM_S	LCTL_T(KC_S)

#define HM_E	RCTL_T(KC_E)
#define HM_I	LALT_T(KC_I)
#define HM_O	LGUI_T(KC_O)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
         KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,                   KC_J,   KC_L,   KC_U,    KC_Y,   KC_QUOT,
         HM_A,   HM_R,   HM_S,   KC_T,   KC_G,                   KC_M,   KC_N,   HM_E,    HM_I,   HM_O,
         KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,                   KC_K,   KC_H,   KC_COMM, KC_DOT, KC_SLSH,
                LT(3, KC_TAB), SFT_T(KC_BSPC),                   LT(1, KC_SPC),  LT(2,KC_ENT),
                                                    KC_MUTE
    ),

    [1] = LAYOUT(
         KC_GRAVE, KC_F2,    XXXXXXX,  KC_F4,    KC_F5,              KC_BSLS,  KC_MINUS, KC_EQUAL, KC_LBRC,  KC_RBRC,
         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
         DF(0),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            DF(1),    XXXXXXX,  _______,  _______,  KC_SCLN,
                                       _______,  _______,            _______,  _______,
                                                           XXXXXXX
    ),

    [2] = LAYOUT(
         XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  KC_F11,   KC_F12,   XXXXXXX,  XXXXXXX,
         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,              KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
         DF(0),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            DF(2),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                       _______,  _______,            _______,  _______,
                                                           XXXXXXX
    ),
    [3] = LAYOUT(
         XXXXXXX,  XXXXXXX,  LSG(KC_4),LSG(KC_S),XXXXXXX,            KC_HOME,  XXXXXXX,  KC_UP,    XXXXXXX,  KC_PGUP,
         KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LGUI,  XXXXXXX,            KC_END,   KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,
         DF(0),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            DF(2),    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                       _______,  _______,            _______,  _______,
                                                           XXXXXXX
    )
};

// Encoder Map
#ifdef ENCODER_MAP_ENABLE
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
        [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
        [1] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
        [2] =   { ENCODER_CCW_CW(_______, _______) },
        [3] =   { ENCODER_CCW_CW(_______, _______) }
    };
#endif
