// Copyright 2021 Andrzej Kotulski (@akotulski)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

enum layer_names {
    _BASE,
    _RAISE,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |      |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |      |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *               |  [   |   ]  |                                                         |      |      |
     *               +-------------+-------------+                             +-------------+-------------+
     *                             |      |      |                             |      |      |
     *                             |------+------|                             |------+------|
     *                             |      |      |                             |      |      |
     *                             +-------------+                             +-------------+
     *                                           +-------------+ +-------------+
     *                                           |      |      | |      |      |
     *                                           |------+------| |------+------|
     *                                           |      |      | |      |      |
     *                                           +-------------+ +-------------+
     */
    [_BASE] = LAYOUT(
        KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_B,             KC_J, KC_L,   KC_U,   KC_Y,   KC_SCLN,   KC_MINS,
        KC_TAB, KC_A, KC_R, KC_S, KC_T , KC_G,             KC_M, KC_N,   KC_E,   KC_I,   KC_O, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V,             KC_K, KC_H,   KC_COMM,   KC_DOT,   KC_SLSH,  KC_BSLS,
                          KC_LPRN, KC_RPRN,                                                 KC_LBRC, KC_RBRC,
                                  KC_SPC, RAISE,                                LOWER, KC_ENT, 
                                            KC_BSPC, KC_LALT,             KC_RCTL, KC_DEL
    ),

    [_RAISE] = LAYOUT(
        _______, _______, _______, KC_PGUP, _______, _______,             KC_GRV, KC_7,   KC_8,   KC_9,   KC_PLUS,   KC_PLUS,
        _______, LCTL(KC_Y), _______, KC_PGDN, _______ , _______,             KC_0, KC_4,   KC_5,   KC_6,   KC_MINS, KC_PIPE,
        _______, KC_UNDO, KC_CUT, KC_COPY, _______, KC_PSTE,             _______, KC_1,   KC_2,   KC_3,   KC_EQL,  KC_UNDS,
                          _______, _______,                                                 _______, _______,
                                  _______, _______,                                _______, _______, 
                                            _______, _______,             _______, _______
    ),

    [_LOWER] = LAYOUT(
        QK_BOOT, KC_PGUP,   KC_HOME, KC_UP, KC_END, KC_NO,             QK_BOOT, _______, KC_NLCK, KC_INS,  KC_SLCK, KC_MUTE,
        KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,             KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, _______, KC_VOLU,
        _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, KC_VOLD,
                          _______, _______,                                                 _______,  _______,
                                  _______, _______,                               _______, _______,
                                            _______, _______,             _______, _______
    )
};

g