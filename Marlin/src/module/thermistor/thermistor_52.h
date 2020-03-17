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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 200 kOhm, beta25 = 4338 K, 1 kOhm pull-up,
// 200k ATC Semitec 204GT-2 (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_52[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 283 }, //283 top rating 300C
  { OV(  20), 274 },//274
  { OV(  23), 265 },//265
  { OV(  27), 256 },//256
  { OV(  31), 247 },//247
  { OV(  37), 240 },//240
  { OV(  43), 230 },//230
  { OV(  51), 221 },//221
  { OV(  61), 212 },//212
  { OV(  73), 203 },//203
  { OV(  87), 194 },//194
  { OV( 106), 184 },//184
  { OV( 128), 175 },//175
  { OV( 155), 165 },//165
  { OV( 189), 155 },//155
  { OV( 230), 144 },//145
  { OV( 278), 135 },//135
  { OV( 336), 126 },//126
  { OV( 402), 116 },//116
  { OV( 476), 107 },//107
  { OV( 554),  96 },//96
  { OV( 635),  86 },//86
  { OV( 713),  76 },//76
  { OV( 784),  66 },//66
  { OV( 846),  57 },//57
  { OV( 897),  48 },//48
  { OV( 937),  37 },//37
  { OV( 966),  27 },//27
  { OV( 986),  17 },//17
  { OV(1000),  8 },//8
  { OV(1010),   0 }
};
