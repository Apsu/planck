#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(LGUI_T(KC_ESC), KC_Q, KC_C, KC_H, KC_P, KC_V, KC_Z, KC_Y, KC_O, KC_J, KC_SCLN, RGUI_T(KC_BSPC), LALT_T(KC_TAB), KC_R, KC_S, KC_N, KC_T, KC_G, KC_W, KC_U, KC_E, KC_I, KC_A, RALT_T(KC_ENT), LCTL_T(KC_GRV), KC_X, KC_M, KC_L, KC_D, KC_B, KC_K, KC_F, KC_QUOT, KC_COMM, KC_DOT, RCTL_T(KC_SLSH), KC_NO, KC_NO, KC_NO, KC_NO, LSFT_T(KC_CAPS), TT(2), TT(1), KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO),
	[1] = LAYOUT_ortho_4x12(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_BSLS, KC_EQL, KC_F11, KC_F12, KC_MINS, KC_QUOT, KC_COMM, KC_DOT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, MO(3), TO(0), KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_ortho_4x12(KC_TRNS, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_HOME, KC_PGDN, KC_END, KC_INS, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), MO(3), KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_ortho_4x12(RESET, AU_TOG, MU_TOG, MU_MOD, KC_NO, KC_NO, RGB_TOG, RGB_HUD, RGB_HUI, RGB_VAD, RGB_VAI, EEP_RST, KC_NO, LALT(KC_UP), LALT(KC_DOWN), C(S(KC_TAB)), LCTL(KC_TAB), KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO, LSFT(KC_PGUP), LSFT(KC_PGDN), SGUI(KC_LBRC), SGUI(KC_RBRC), KC_NO, KC_NO, KC_PSCR, KC_PAUS, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
