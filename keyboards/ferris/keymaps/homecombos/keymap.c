// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

enum combos {
  capsword,
  esc,
  ent,
  bksp,
  lalt,
  lgui,
  lctl,
  ralt,
  rgui,
  rctl,
  home_lalt,
  home_laltgui,
  home_laltctl,
  home_laltguictl,
  home_lgui,
  home_lguictl,
  home_lctl,
  home_ralt,
  home_raltgui,
  home_raltctl,
  home_raltguictl,
  home_rgui,
  home_rguictl,
  home_rctl
};

const uint16_t PROGMEM capsword_combo[] = {LT(3, KC_TAB), KC_T, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {KC_F, KC_V, COMBO_END};
const uint16_t PROGMEM bksp_combo[] = {KC_A, MT(MOD_LSFT, KC_SLSH), COMBO_END};
const uint16_t PROGMEM lalt_combo[] = {KC_W, KC_D, COMBO_END};
const uint16_t PROGMEM lgui_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM lctl_combo[] = {KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM ralt_combo[] = {KC_O, KC_K, COMBO_END};
const uint16_t PROGMEM rgui_combo[] = {KC_O, KC_J, COMBO_END};
const uint16_t PROGMEM rctl_combo[] = {KC_I, KC_J, COMBO_END};
const uint16_t PROGMEM home_lalt_combo[] = {LT(3, KC_TAB), KC_F, COMBO_END};
const uint16_t PROGMEM home_laltgui_combo[] = {LT(3, KC_TAB), KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM home_laltctl_combo[] = {LT(3, KC_TAB), KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM home_laltguictl_combo[] = {LT(3, KC_TAB), KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM home_lgui_combo[] = {LT(3, KC_TAB), KC_D, COMBO_END};
const uint16_t PROGMEM home_lguictl_combo[] = {LT(3, KC_TAB), KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM home_lctl_combo[] = {LT(3, KC_TAB), KC_S, COMBO_END};
const uint16_t PROGMEM home_ralt_combo[] = {LT(2, KC_BSPC), KC_J, COMBO_END};
const uint16_t PROGMEM home_raltgui_combo[] = {LT(2, KC_BSPC), KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM home_raltctl_combo[] = {LT(2, KC_BSPC), KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM home_raltguictl_combo[] = {LT(2, KC_BSPC), KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM home_rgui_combo[] = {LT(2, KC_BSPC), KC_K, COMBO_END};
const uint16_t PROGMEM home_rguictl_combo[] = {LT(2, KC_BSPC), KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM home_rctl_combo[] = {LT(2, KC_BSPC), KC_L, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [capsword] = COMBO(capsword_combo, KC_TRNS),
  [esc] = COMBO(esc_combo, KC_ESC),
  [ent] = COMBO(ent_combo, KC_ENT),
  [bksp] = COMBO(bksp_combo, KC_BSPC),
  [lalt] = COMBO(lalt_combo, KC_LALT),
  [lgui] = COMBO(lgui_combo, KC_LGUI),
  [lctl] = COMBO(lctl_combo, KC_LCTL),
  [ralt] = COMBO(ralt_combo, KC_RALT),
  [rgui] = COMBO(rgui_combo, KC_RGUI),
  [rctl] = COMBO(rctl_combo, KC_RCTL),
  [home_lalt] = COMBO(home_lalt_combo, KC_LALT),
  [home_laltgui] = COMBO(home_laltgui_combo, LALT(KC_LGUI)),
  [home_laltctl] = COMBO(home_laltctl_combo, LALT(KC_LCTL)),
  [home_laltguictl] = COMBO(home_laltguictl_combo, LALT(LGUI(KC_LCTL))),
  [home_lgui] = COMBO(home_lgui_combo, KC_LGUI),
  [home_lguictl] = COMBO(home_lguictl_combo, LGUI(KC_LCTL)),
  [home_lctl] = COMBO(home_lctl_combo, KC_LCTL),
  [home_ralt] = COMBO(home_ralt_combo, KC_RALT),
  [home_raltgui] = COMBO(home_raltgui_combo, RALT(KC_RGUI)),
  [home_raltctl] = COMBO(home_raltctl_combo, RALT(KC_RCTL)),
  [home_raltguictl] = COMBO(home_raltguictl_combo, RALT(RGUI(KC_RCTL))),
  [home_rgui] = COMBO(home_rgui_combo, KC_RGUI),
  [home_rguictl] = COMBO(home_rguictl_combo, RGUI(KC_RCTL)),
  [home_rctl] = COMBO(home_rctl_combo, KC_RCTL)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // default
  [0] = LAYOUT_split_3x5_2(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
    MT(MOD_LSFT, KC_SLSH), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, MT(MOD_LSFT, KC_DOT),
    LT(1, KC_SPC), LT(3, KC_TAB), LT(2, KC_BSPC), KC_ENT
  ),
  // numbers
  [1] = LAYOUT_split_3x5_2(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_GRV, KC_LBRC, KC_RBRC, KC_DEL,
    MO(1), KC_TRNS, KC_TRNS, KC_TRNS
  ),
  // symbols
  [2] = LAYOUT_split_3x5_2(
    KC_GRV, KC_LBRC, KC_RBRC, KC_DLR, KC_TILD, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,
    KC_QUES, KC_DQUO, KC_BSPC, KC_BSPC, KC_BSPC, KC_BSPC, KC_BSPC, KC_UNDS, KC_QUOT, MT(MOD_RSFT, KC_BSLS),
    KC_TRNS, KC_TAB, KC_TRNS, KC_TRNS
  ),
  // movement
  [3] = LAYOUT_split_3x5_2(
    KC_DEL, KC_PGDN, KC_UP, KC_PGUP, KC_CAPS, KC_TRNS, KC_PGDN, KC_UP, KC_PGUP, KC_DEL,
    KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
    KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_PGDN, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  // colemak
  [4] = LAYOUT_split_3x5_2(
    KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN,
    KC_A, KC_R, KC_S, KC_T, KC_G, KC_K, KC_N, KC_E, KC_I, KC_O,
    KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, MT(MOD_LSFT, KC_SLSH),
    LT(1, KC_SPC), LT(3, KC_TAB), LT(2, KC_BSPC), KC_ENT
  )
};
