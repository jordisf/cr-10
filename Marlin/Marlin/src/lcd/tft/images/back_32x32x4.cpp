/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include "../tft_image.h"

const uint8_t back_32x32x4[512] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x75, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x66, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x76, 0xE5, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x6F, 0xE5, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x76, 0xFF, 0xE5, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x6E, 0xFF, 0xE5, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x76, 0xEF, 0xFF, 0xE5, 0x66, 0x77, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x6E, 0xFF, 0xFF, 0xD5, 0x55, 0x66, 0x67, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x76, 0xFF, 0xFF, 0xFF, 0xFE, 0xB8, 0x55, 0x56, 0x67, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x85, 0x56, 0x67, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x76, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x95, 0x66, 0x78, 0x88, 0x88, 0x88,
  0x87, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x65, 0x66, 0x88, 0x88, 0x88,
  0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x56, 0x78, 0x88, 0x88,
  0x78, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x85, 0x67, 0x88, 0x88,
  0x87, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x56, 0x78, 0x88,
  0x88, 0x77, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x65, 0x68, 0x88,
  0x88, 0x87, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD5, 0x67, 0x88,
  0x88, 0x88, 0x77, 0xEF, 0xFF, 0xFF, 0xFC, 0xDE, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x56, 0x88,
  0x88, 0x88, 0x87, 0x7E, 0xFF, 0xFF, 0xD5, 0x67, 0x77, 0x8A, 0xDF, 0xFF, 0xFF, 0xFF, 0x56, 0x78,
  0x88, 0x88, 0x88, 0x77, 0xEF, 0xFF, 0xE5, 0x78, 0x87, 0x77, 0x77, 0xAE, 0xFF, 0xFF, 0x95, 0x68,
  0x88, 0x88, 0x88, 0x87, 0x7E, 0xFF, 0xE5, 0x78, 0x88, 0x88, 0x88, 0x77, 0xAF, 0xFF, 0xF5, 0x58,
  0x88, 0x88, 0x88, 0x88, 0x77, 0xEF, 0xE5, 0x78, 0x88, 0x88, 0x88, 0x88, 0x77, 0xDF, 0xF8, 0x57,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x7F, 0xE6, 0x78, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7B, 0xFC, 0x56,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xD7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xBF, 0x66,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x7D, 0x97,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x97,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
};

const tImage Back_32x32x4 = { (void *)back_32x32x4, 32, 32, GREYSCALE4 };

#endif // HAS_GRAPHICAL_TFT
