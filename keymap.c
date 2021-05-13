#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_Q, KC_C, KC_H, KC_P, KC_V, KC_NO, KC_NO, KC_Z, KC_Y, KC_O, KC_J, KC_SCLN, LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_N), LSFT_T(KC_T), KC_G, KC_NO, KC_NO, KC_W, RSFT_T(KC_U), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_A), KC_X, KC_M, KC_L, KC_D, KC_B, KC_NO, KC_NO, KC_K, KC_F, KC_QUOT, KC_COMM, KC_DOT, KC_NO, KC_NO, KC_ESC, LT(3,KC_CAPS), KC_TAB, KC_NO, KC_NO, KC_ENT, LT(2,KC_SPC), KC_BSPC, KC_NO, KC_NO),
	[1] = LAYOUT_ortho_4x12(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_NO, KC_NO, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_QUOT, KC_COMM, KC_DOT, KC_NO, KC_NO, KC_ESC, LT(3,KC_CAPS), KC_TAB, KC_NO, KC_NO, KC_ENT, LT(2,KC_SPC), KC_BSPC, KC_NO, KC_NO),
	[2] = LAYOUT_ortho_4x12(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, LGUI_T(KC_1), LALT_T(KC_2), LCTL_T(KC_3), LSFT_T(KC_4), KC_5, KC_NO, KC_NO, KC_6, RSFT_T(KC_7), RCTL_T(KC_8), RALT_T(KC_9), RGUI_T(KC_0), KC_LBRC, KC_RBRC, KC_BSLS, KC_EQL, KC_GRV, KC_NO, KC_NO, KC_SLSH, KC_MINS, KC_QUOT, KC_COMM, KC_DOT, KC_NO, KC_NO, KC_F11, MO(4), KC_F12, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, MO(4), KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_ortho_4x12(RESET, DF(0), DF(1), KC_PSCR, AU_TOG, KC_NO, KC_NO, RGB_TOG, RGB_HUD, RGB_HUI, RGB_VAD, RGB_VAI, C(S(KC_TAB)), LCTL(KC_TAB), SGUI(KC_LBRC), SGUI(KC_RBRC), MU_TOG, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, LALT(KC_UP), LALT(KC_DOWN), LCTL(KC_PGUP), LCTL(KC_PGDN), MU_MOD, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};
