#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define manufacturer    qmkbuilder
#define keyboard_name   keyboard
#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0100
#define MANUFACTURER    "ME"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5, F4, F5, F6, F7, B1, B3, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
