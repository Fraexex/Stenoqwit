#include QMK_KEYBOARD_H

enum layers {
  _STENO,
};

/* Matrix shape (3 rows × 10 cols). Empty switches are KC_NO. */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_STENO] = LAYOUT(
    // Row 1
    STN_S,  STN_T,  STN_K,  STN_P,  STN_W,  STN_H,  STN_T,  STN_R,  STN_S,  KC_NO,
    // Row 2
    STN_A,  STN_O,  STN_E,  STN_U,  STN_F,  STN_R,  STN_P,  STN_B,  STN_L,  KC_NO,
    // Row 3
    KC_NO,  KC_NO,  STN_L,  STN_T,  KC_NO,  STN_S,  STN_D,  KC_NO,  KC_NO,  STN_Z
  ),
};
