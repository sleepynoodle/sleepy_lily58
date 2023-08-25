/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
 /* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

#define VIAL_KEYBOARD_UID {0x7E, 0xFD, 0xFC, 0x5B, 0x7D, 0x39, 0x48, 0x06}

#define SPLIT_USB_DETECT

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define MASTER_RIGHT

#define TAPPING_TOGGLE 3

#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO

#define MOUSE_EXTENDED_REPORT

#define MOUSEKEY_INTERVAL 6
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 3

#define SPLIT_WPM_ENABLE