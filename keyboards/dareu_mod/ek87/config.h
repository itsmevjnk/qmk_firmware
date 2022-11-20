// Copyright 2022 Nguyen Thanh Vinh (@itsmevjnk)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 6
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { A15, B3, B4, B5, B8, B9 }
#define MATRIX_COL_PINS { A8, B15, B14, B11, B10, B1, B0, A7, A6, A5, A4, B13, A3, B12, A2, A1, A0 }
#define DIODE_DIRECTION ROW2COL

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

#define DEBOUNCE 5

#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
