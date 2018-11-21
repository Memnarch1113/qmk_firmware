#include "GLHF69.h"

#define _______ KC_TRNS

// #define HDN 1
// #define OSY 2
// #define MOS 3
// #define CTL_ESC CTL_T(KC_ESC)
// #define SFT_BSP SFT_T(KC_BSPC)


// NOTE: We have one bonus column that you can see is set to KC_DEL. In the physical layout of the board, it is actually right after the KC_BSPC
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(//                                                                                    This goes here    V-----------------------------------------------------<
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_DEL, KC_7,    KC_8,    KC_9,   KC_KP_SLASH,    KC_BSPC, \
  KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME, KC_4,    KC_5,    KC_6,   KC_KP_ASTERISK,         \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT, KC_END,  KC_1,    KC_2,    KC_3,   KC_KP_MINUS,            \
  KC_LCTL, KC_LGUI, KC_LALT, KC_NO,                     KC_SPC,           MO(1), KC_LEFT, KC_DOWN, KC_RGHT,            KC_BSLS, KC_GRV,  KC_0,    KC_MINS,KC_EQUAL               \
),
[1] = KEYMAP(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,          _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______,                   _______,          _______, _______, _______, _______,          _______, _______, _______, _______, _______
)


};


const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  return MACRO_NONE;
};
