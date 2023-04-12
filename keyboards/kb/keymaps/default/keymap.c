#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_ortho_4x12( 
		KC_A, KC_B, KC_C,
		KC_D, KC_E, KC_F,
		KC_G, KC_Z, KC_X 
	)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
