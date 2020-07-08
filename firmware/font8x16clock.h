/*
 * cook'oo clock - the smack-'n-go reverse kitchen timer
 * 8x16px font setup used to display the last time
 * Used within the Tiny4kOLED library
 *
 * Copyright (C) 2020 Sven Gregori <sven@craplab.fi>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <avr/pgmspace.h>

const uint8_t ssd1306xled_font8x16_clock [] PROGMEM = {
    0xf0, 0xf8, 0x1c, 0x0c, 0x1c, 0xf8, 0xf0, 0x00, 0x0f, 0x1f, 0x38, 0x30, 0x38, 0x1f, 0x0f, 0x00, // 0
    0x00, 0x20, 0x30, 0x18, 0xfc, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x00, 0x00, // 1
    0x30, 0x38, 0x0c, 0x0c, 0x8c, 0xfc, 0x78, 0x00, 0x30, 0x38, 0x3c, 0x37, 0x33, 0x31, 0x30, 0x00, // 2
    0x18, 0x18, 0x8c, 0x8c, 0x8c, 0xf8, 0x78, 0x00, 0x18, 0x18, 0x31, 0x31, 0x31, 0x1f, 0x0e, 0x00, // 3
    0x00, 0x80, 0xe0, 0x38, 0xfc, 0xfc, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x3f, 0x3f, 0x06, 0x00, // 4
    0x00, 0xfc, 0xfc, 0xcc, 0xcc, 0xcc, 0x0c, 0x00, 0x00, 0x18, 0x38, 0x30, 0x30, 0x1f, 0x0f, 0x00, // 5
    0xe0, 0xf0, 0xf8, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x0f, 0x1f, 0x30, 0x30, 0x38, 0x1f, 0x0f, 0x00, // 6
    0x0c, 0x0c, 0x0c, 0x8c, 0xfc, 0xfc, 0x1c, 0x00, 0x00, 0x20, 0x3c, 0x3f, 0x07, 0x00, 0x00, 0x00, // 7
    0x78, 0xf8, 0x8c, 0x8c, 0x8c, 0xf8, 0x78, 0x00, 0x1e, 0x1f, 0x31, 0x31, 0x31, 0x3f, 0x1e, 0x00, // 8
    0xf0, 0xf8, 0x1c, 0x0c, 0x1c, 0xf8, 0xf0, 0x00, 0x00, 0x33, 0x33, 0x33, 0x1b, 0x0f, 0x07, 0x00, // 9
    0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00  // :
};

const DCfont TinyOLED4kfont8x16Clock = {
  (uint8_t *) ssd1306xled_font8x16_clock,
  8, // character width in pixels
  2, // character height in pages (8 pixels)
  48,58 // ASCII extents
};

// for backwards compatibility
#define FONT8X16CLOCK (&TinyOLED4kfont8x16Clock)