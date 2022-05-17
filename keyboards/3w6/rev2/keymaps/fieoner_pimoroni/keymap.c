/*
Copyright 2021 weteor

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

#include QMK_KEYBOARD_H

enum layers
{
    _ALPHA_QWERTY = 0,
    _ALPHA_COLEMAK,
    _SYM,
    _NAV,
    _NUM,
    _CFG,
    _GAMES,
};

const uint16_t PROGMEM win_combo[] = {RSFT_T(KC_DOT), KC_COMM, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM game_combo[] = {KC_P, KC_SCLN, RSFT_T(KC_DOT), COMBO_END};
const uint16_t PROGMEM alt_combo[] = {KC_SCLN, KC_K, COMBO_END};
const uint16_t PROGMEM ralt_combo[] = {KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM altwin_combo[] = {KC_SCLN, KC_J, COMBO_END};
const uint16_t PROGMEM caps_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM backslash_combo[] = {KC_L, KC_SCLN, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
	COMBO(win_combo, KC_LGUI),
	COMBO(esc_combo, KC_ESC),
	COMBO(game_combo, TG(_GAMES)),
	COMBO(alt_combo, KC_LALT),
	COMBO(ralt_combo, KC_RALT),
	COMBO(altwin_combo, LGUI(KC_LALT)),
	COMBO(caps_combo, KC_CAPS),
	COMBO(backslash_combo, KC_BSLS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    
[_ALPHA_QWERTY] = LAYOUT(
        KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,                                                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  
        KC_A,         KC_S,    KC_D,    KC_F,    KC_G,                                                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        LSFT_T(KC_SLSH), KC_Z, KC_X,    KC_C,    KC_V,                                                   KC_B,    KC_N,    KC_M,    KC_COMM, RSFT_T(KC_DOT),
            
                        LCTL_T(KC_ESC), LT(_NUM,KC_SPC), LT(_NAV, KC_TAB),     LT(_SYM, KC_BSPC), KC_ENT, LALT_T(KC_DEL)         
    ),
    [_ALPHA_COLEMAK] = LAYOUT(
        KC_Q,         KC_W,    KC_F,    KC_P,    KC_G,                                                   KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
        KC_A,         KC_R,    KC_S,    KC_T,    KC_D,                                                   KC_H,    KC_N,    KC_E,    KC_I,    KC_O,
        LSFT_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,                                                   KC_K,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SCLN),
                        LCTL_T(KC_ENT), LT(_NUM,KC_SPC), LT(_NAV, KC_TAB),     LT(_SYM, KC_BSPC), KC_ENT, LALT_T(KC_DEL)         
    ),
    [_SYM] = LAYOUT(
        KC_GRV , KC_CIRC,   KC_AT,  KC_DLR, KC_TILD,                                KC_AMPR, KC_EXLM, KC_PIPE, KC_MINS, KC_EQL,
        KC_SLSH, KC_LBRC, KC_LCBR, KC_LPRN,  KC_EQL,                                KC_ASTR, KC_RPRN, KC_RCBR, KC_RBRC, KC_QUOT, 
        _______, KC_QUES, KC_PLUS, KC_PERC, XXXXXXX,                                XXXXXXX, XXXXXXX, KC_MINS, KC_QUOT, RSFT_T(KC_BSLS),
                                        XXXXXXX, MO(_CFG), XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX         
    ),
    [_NAV] = LAYOUT(
        XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,                                XXXXXXX, KC_PGDN,   KC_UP, KC_PGUP,  KC_DEL,
        KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_CAPS,                                KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,
        KC_TAB, XXXXXXX, XXXXXXX, LALT_T(OSM(KC_LALT)), XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT,
	                                XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, MO(_CFG), XXXXXXX
    ),
    [_NUM] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                                      KC_F6,    KC_F7,  KC_F8,  KC_F9, KC_F10,
        KC_1,  KC_2,  KC_3,  KC_4,  KC_5,                                           KC_6,     KC_7,   KC_8,   KC_9,  KC_0,
        KC_F11,  KC_F12,  KC_F2,  KC_F3,  KC_F4,                                    KC_PMNS,  KC_P1,  KC_P2,  KC_P3, KC_PAST,
                                        XXXXXXX, XXXXXXX, XXXXXXX,      KC_PEQL, KC_PENT, XXXXXXX
    ),
    [_CFG] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX,DF(_ALPHA_QWERTY), DF(_ALPHA_COLEMAK),
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                         XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_GAMES] = LAYOUT(
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,                                                   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  
        KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,                                                   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_LCTRL, KC_Z,    KC_X,    KC_C,    KC_V,                                                   KC_B,    KC_N,    KC_M,    KC_COMM, RSFT_T(KC_DOT),
            
                                           KC_ESC, KC_SPC, KC_GRV,     TG(_GAMES), KC_ENT, LALT_T(KC_DEL)         
    ),
};
