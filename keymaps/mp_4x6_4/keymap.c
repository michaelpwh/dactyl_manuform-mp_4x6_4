// Copyright 2021 Andrzej Kotulski (@akotulski)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

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
    [0] = LAYOUT(
        KC_ESC, KC_Q, KC_W, KC_F, KC_P, KC_B,             KC_J, KC_L,   KC_U,   KC_Y,   KC_SCLN,   KC_MINS,
        KC_TAB, KC_A, KC_R, KC_S, KC_T , KC_G,             KC_M, KC_N,   KC_E,   KC_I,   KC_O, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V,             KC_K, KC_H,   KC_COMM,   KC_DOT,   KC_SLSH,  KC_BSLS,
                          KC_LPRN, KC_RPRN,                                                 KC_LBRC, KC_RBRC,
                                  KC_SPC, MO(1),                                MO(2), KC_ENT,  
                                            LT(3, KC_LGUI), KC_LCTL,             KC_RALT, MO(4)
    ),

    [1] = LAYOUT(
        _______, _______, KC_WH_U, KC_PGUP, KC_BTN1, _______,             KC_GRV, KC_7,   KC_8,   KC_9,   _______,   _______,
        _______, LCTL(KC_Y), KC_WH_D, KC_PGDN, KC_BTN2 , _______,             KC_0, KC_4,   KC_5,   KC_6,   KC_EQL, _______,
        _______, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), KC_NO, LCTL(KC_V),             KC_NO, KC_1,   KC_2,   KC_3,   _______,  _______,
                          _______, _______,                                                 _______, _______,
                                  _______, _______,                                _______, _______, 
                                            _______, _______,             _______, _______
    ),

    [2] = LAYOUT(
        QK_BOOT, KC_PGUP,   KC_HOME, KC_UP, KC_END, KC_DEL,             QK_BOOT, KC_NO, KC_PSCR, KC_INS,  KC_SCRL, KC_MUTE,
        _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,             KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_VOLU,
        _______, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD,
                          _______, _______,                                                 _______,  _______,
                                  _______, _______,                               _______, _______,
                                            _______, _______,             _______, _______
    ),

    [3] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                          KC_LBRC, KC_RBRC,                                                KC_PLUS, KC_EQL,
                                    MO(1), KC_SPC,                                  KC_ENT, MO(2), 
                                            TT(0), KC_RCTL,            KC_LALT,  TG(4)
    ),

    [4] = LAYOUT(
        _______, KC_F1,   _______, _______, _______, _______,             _______, _______, _______, _______,  KC_F12, _______,
        _______, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,             KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, _______,
        _______, _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                 _______,  _______,
                                   _______,  _______,                                  _______,  _______,
                                            _______, _______,            _______, _______ 
    )
};
