/* Copyright 2021 QMK
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

/*
 * This file was auto-generated by `qmk painter-convert-graphics -i lock-num-ON.png -f mono4`
 */

#include <progmem.h>
#include <stdint.h>
#include <qp.h>
#include <qp_internal.h>

// clang-format off

static const uint8_t gfx_lock_num_ON_data[256] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
    0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xFC, 0xFF, 0xFF, 0x0F, 0xF0, 0xFF, 0xFF, 0x00,
    0xFC, 0xFF, 0xFF, 0x03, 0xF0, 0xFF, 0xFF, 0x03, 0xFC, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0xFC, 0xFF, 0x3F, 0x00, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x30, 0xF0, 0xFF, 0xFF, 0x3F,
    0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F,
    0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F,
    0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F,
    0xFC, 0xFF, 0xFF, 0x3F, 0xF0, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
    0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const painter_raw_image_descriptor_t gfx_lock_num_ON_raw PROGMEM = {
    .base = {
        .image_format = IMAGE_FORMAT_GRAYSCALE,
        .image_bpp    = 2,
        .compression  = IMAGE_UNCOMPRESSED,
        .width        = 32,
        .height       = 32
    },
    .image_palette = NULL,
    .byte_count    = 256,
    .image_data    = gfx_lock_num_ON_data,
};

painter_image_t gfx_lock_num_ON PROGMEM = (painter_image_t)&gfx_lock_num_ON_raw;

// clang-format on
