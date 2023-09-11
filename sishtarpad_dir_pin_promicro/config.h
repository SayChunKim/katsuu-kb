#pragma once

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

/* key matrix pins */
// #define MATRIX_ROW_PINS { F7, B5 }
// #define MATRIX_COL_PINS { F4, F6, F5, B4, E6, D7, C6 }

/* COL2ROW or ROW2COL */
// #define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

// #define ENCODER_DIRECTION_FLIP
#define ENCODER_DEFAULT_POS 0x3

#define OLED_DISPLAY_128X64
#define MK_3_SPEED

#define OLED_UPDATE_INTERVAL 200