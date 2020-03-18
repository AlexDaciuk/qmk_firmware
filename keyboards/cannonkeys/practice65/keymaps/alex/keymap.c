#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_default(
		KC_GESC, KC_1, 		KC_2,			KC_3, 	KC_4, 	KC_5, KC_6, KC_7, KC_8, 		KC_9, 	KC_0, 		KC_MINS, KC_EQL, 	KC_BSPC, KC_NO, KC_DEL,
		KC_TAB,  KC_Q, 		KC_W, 		KC_F, 	KC_P, 	KC_G, KC_J, KC_L, KC_U, 		KC_Y, 	KC_SCLN, 	KC_LBRC, KC_RBRC, KC_BSLS, 				KC_PSCR,
		KC_CAPS, KC_A,    KC_R, 	 	KC_S, 	KC_T, 	KC_D, KC_H, KC_N, KC_E, 		KC_I, 	KC_O, 		KC_QUOT, KC_ENT, 									KC_PGUP,
		KC_LSFT, KC_Z,    KC_X, 	 	KC_C, 	KC_V, 	KC_B, KC_K, KC_M, KC_COMM,	KC_DOT, KC_SLSH, 	KC_RSFT, KC_UP, 									KC_PGDN,
		// ---------------------------------------------------------------------------
		KC_LCTL, KC_LGUI, KC_LALT, 	KC_SPC, KC_RALT, MO(1), KC_RCTL, 															KC_LEFT, KC_DOWN, 								KC_RGHT
	),

  [1] = LAYOUT_default(
		KC_GRV, 	KC_F1, 	KC_F2, 		KC_F3, 		KC_F4, 		KC_F5, 		KC_F6, 		KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	KC_NO, KC_TRNS, KC_INS,
		KC_NO, 		KC_NO, 	KC_NO, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,	KC_TRNS, 	KC_TRNS, 	KC_VOLD, 	KC_VOLU, 	KC_MSTP, 	KC_MPLY, KC_MFFD,
		KC_NO, 		KC_NO, 	KC_NO, 		KC_NO, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_MRWD,
		KC_NO, 		KC_NO, 	KC_NO, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_HOME, 	KC_TRNS,
		// ---------------------------------------------------------------------------
		KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, RESET)
};
