#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_BSPC, KC_TAB, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), KC_T, KC_G, KC_M, KC_N, RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_ENT, KC_INS, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_HOME, KC_END, KC_PGUP, KC_PGDN, LSFT_T(KC_CAPS), MO(4), MO(3), LT(2,KC_SPC), KC_DOWN, KC_UP, KC_LEFT, KC_RGHT),
	[1] = LAYOUT_ortho_4x12(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), KC_F, KC_G, KC_H, KC_J, RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT), KC_ENT, KC_INS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_HOME, KC_END, KC_PGUP, KC_PGDN, LSFT_T(KC_CAPS), MO(4), MO(3), LT(2,KC_SPC), KC_DOWN, KC_UP, KC_LEFT, KC_RGHT),
	[2] = LAYOUT_ortho_4x12(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, LGUI_T(KC_1), LALT_T(KC_2), LCTL_T(KC_3), KC_4, KC_5, KC_6, KC_7, RCTL_T(KC_8), RALT_T(KC_9), RGUI_T(KC_0), KC_NO, KC_NO, KC_BSLS, KC_LBRC, KC_RBRC, KC_EQL, KC_GRV, KC_SCLN, KC_MINS, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_PIPE, KC_LCBR, KC_RCBR, KC_PLUS, KC_TILD, KC_COLN, KC_UNDS, KC_LT, KC_GT, KC_QUES, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_ortho_4x12(RESET, DF(0), DF(1), KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_HUD, RGB_HUI, RGB_VAD, RGB_VAI, KC_NO, C(S(KC_TAB)), LCTL(KC_TAB), SGUI(KC_LBRC), SGUI(KC_RBRC), KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, LALT(KC_UP), LALT(KC_DOWN), LCTL(KC_PGUP), LCTL(KC_PGDN), KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, EEP_RST, AU_TOG, MU_TOG, MU_MOD, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PAUS, KC_PSCR)
};
