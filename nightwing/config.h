/* Copyright 2021 Alexander Ding (@switch-code)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"




/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1738
#define DEVICE_VER      0x0001
#define MANUFACTURER    onizak
#define PRODUCT         Nightwing

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { D6, D7, B4, F0 }
#define MATRIX_COL_PINS \
    { F5, F6, C7, C6, B6, B5 }
#define DIODE_DIRECTION COL2ROW

// Encoders
#define ENCODERS_PAD_A \
    { F4 }
#define ENCODERS_PAD_B \
    { F1 }


#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define SPLIT_USB_DETECT
#define SPLIT_HAND_PIN B0

// #define ONESHOT_TAP_TOGGLE 5
#define ONESHOT_TIMEOUT 5000




// RGB Configuration


#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM 84
#    define RGBLED_SPLIT { 42, 42 }
#    define DRIVER_LED_TOTAL RGBLED_NUM
// #    define RGB_DI_PIN D5
#    define RGB_DI_PIN B7
#    define RGB_MATRIX_SPLIT RGBLED_SPLIT
// #    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #    define RGB_MATRIX_KEYRELEASES
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLED_NUM 42
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  // #define RGBLIGHT_LIMIT_VAL 230
  #define RGB_DI_PIN B7
#endif

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_FONT_H "keyboards/nightwing/font.c"
#endif

// #define MASTER_RIGHT
#define SPLIT_TRANSPORT_MIRROR

#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL

#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define DISABLE_RGB_MATRIX_SPLASH


#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT