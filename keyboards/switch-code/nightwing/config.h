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

#include "nightwing.h"
#include "quantum.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1738
#define PRODUCT_ID      0x0001
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

// RGB configuration
#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM 12  // Number of LEDs
#    define RGBLIGHT_SPLIT
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGBLED_NUM 86  // Number of LEDs
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGB_MATRIX_SPLIT { 42, 42 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

// Audio configuration
#define AUDIO_PIN F7