/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "chibios_test.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    {
      {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, KC_7,   KC_8,   KC_9,   KC_KP_SLASH,    KC_DEL},
      {KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME, KC_4,   KC_5,   KC_6,   KC_KP_ASTERISK},
      {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT, KC_END,  KC_1,   KC_2,   KC_3,   KC_KP_MINUS},
      {KC_LCTL,    KC_LGUI,   KC_LALT,     KC_SPC       ,             KC_ENT          , KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSLS, KC_GRV, KC_0,   KC_MINS,KC_EQUAL}



         }, // test with KC_CAPS, KC_A, RESET
};



const uint16_t fn_actions[] = {
};
