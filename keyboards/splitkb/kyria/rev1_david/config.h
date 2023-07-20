/*
Copyright 2019 Thomas Baart <thomas@splitkb.com>

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

#pragma once

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//was 5, which seems to be enough for left side but right still chatters badly
#define DEBOUNCE        11

//increase polling rate from default 8, this together with eager debounce in rules.mk should work better. disabled again
//define USB_POLLING_INTERVAL_MS 1

//was 5 but I think I only need 4
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define QMK_KEYS_PER_SCAN 4

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define NO_ACTION_ONESHOT

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

// Configure the global tapping term (default: 200ms). Might try lowering a little bit, maybe 180?
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods. Might test switching this off if getiing lots of 'fe' instead of 'F'?
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

/* key matrix size */
/* Rows are doubled up */
#define MATRIX_ROWS  8
#define MATRIX_COLS  8

// wiring
#define MATRIX_ROW_PINS \
    { B4, E6, D7, D4 }
#define MATRIX_COL_PINS \
    { B6, B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

#define ENCODERS_PAD_A \
    { C6 }
#define ENCODERS_PAD_B \
    { B5 }
#define ENCODERS_PAD_A_RIGHT \
    { B5 }
#define ENCODERS_PAD_B_RIGHT \
    { C6 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
//define EE_HANDS
#define SOFT_SERIAL_PIN D2

#define RGB_DI_PIN      D3
#define RGBLED_SPLIT \
    { 10, 10 }
#define RGBLED_NUM 20

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define SPLIT_OLED_ENABLE
#    define SPLIT_LAYER_STATE_ENABLE
#endif

/* RGB matrix support */
#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define DRIVER_LED_TOTAL RGBLED_NUM // Number of LEDs
#    define RGB_MATRIX_SPLIT { 10, 10 }
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 170
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#endif
