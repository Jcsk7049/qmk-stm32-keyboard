#pragma once

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_COL_PINS { A6, A5, A7, B15 }
#define MATRIX_ROW_PINS { B14, B12, A8, A4, A3 }

/* diode direction */
#define DIODE_DIRECTION ROW2COL

/* debounce */
#define DEBOUNCE 5

/* bootmagic lite */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* RGB Matrix */
#define WS2812_DI_PIN B13
#define RGB_MATRIX_LED_COUNT 17

#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 2
