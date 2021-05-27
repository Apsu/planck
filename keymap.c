#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_Q, KC_C, KC_H, KC_P, KC_V, KC_NO, KC_NO, KC_K, KC_Y, KC_O, KC_J, KC_SCLN, LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_N), LSFT_T(KC_T), KC_G, KC_NO, KC_NO, KC_W, LSFT_T(KC_U), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_A), KC_X, RALT_T(KC_M), KC_L, KC_D, KC_B, KC_NO, KC_NO, KC_Z, KC_F, KC_QUOT, RALT_T(KC_COMM), KC_DOT, KC_NO, KC_NO, LT(4,KC_ESC), LT(2,KC_CAPS), LT(3,KC_TAB), KC_NO, KC_NO, KC_ENT, LT(5,KC_SPC), KC_BSPC, KC_NO, KC_NO),
	[1] = LAYOUT_ortho_4x12(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_NO, KC_NO, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN), KC_Z, RALT_T(KC_X), KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_QUOT, RALT_T(KC_COMM), KC_DOT, KC_NO, KC_NO, LT(4,KC_ESC), LT(2,KC_CAPS), LT(3,KC_TAB), KC_NO, KC_NO, KC_ENT, LT(5,KC_SPC), KC_BSPC, KC_NO, KC_NO),
	[2] = LAYOUT_ortho_4x12(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO),
	[3] = LAYOUT_ortho_4x12(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_MINS, KC_4, KC_5, KC_6, KC_EQL, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_1, KC_2, KC_3, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_GRV, KC_0, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_ortho_4x12(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, KC_NO, KC_NO),
	[5] = LAYOUT_ortho_4x12(RESET, KC_NO, DF(1), DF(0), KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_HUD, RGB_HUI, RGB_VAD, RGB_VAI, LALT(KC_UP), LALT(KC_DOWN), SGUI(KC_LBRC), SGUI(KC_RBRC), KC_NO, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, A(S(KC_UP)), A(S(KC_DOWN)), LCTL(KC_PGUP), LCTL(KC_PGDN), KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};
