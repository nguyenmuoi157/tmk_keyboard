#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
      GRV,  1,    2,    3,     4,    5,    6,    7,    8,    9,    0,     MINS, EQL,  BSPC,   ESC,  PGUP,
      TAB,  Q,    W,    E,     R,    T,    Y,    U,    I,    O,    P,     LBRC, RBRC, BSLS,   DEL,  PGDN,
      FN0,  A,    S,    D,     F,    G,    H,    J,    K,    L,    SCLN,  QUOT, ENT, 
      LSFT, Z,    X,    C,     V,    B,    N,    M,    COMM, DOT,  SLSH,        RSFT,         UP,
      LCTL, LALT, LGUI,                 SPC,                 RGUI, RALT,  RCTL,         LEFT, DOWN, RGHT
  ),
  KEYMAP(
      GRV,  F1,   F2,   F3,    F4,   F5,   F6,   F7,   F8,   F9,   F10,   F11,  F12,  TRNS,   TRNS, HOME,
      TRNS, TRNS, UP,   TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, UP,   TRNS,  TRNS, TRNS, TRNS,   TRNS, END,
      TRNS, LEFT, DOWN, RIGHT, TRNS, TRNS, TRNS, TRNS, LEFT, DOWN, RIGHT, TRNS, TRNS, 
      TRNS, MPRV, MPLY, MNXT,  VOLU, VOLD, MUTE, TRNS, TRNS, TRNS, END,         TRNS,         VOLU, 
      TRNS, TRNS, TRNS,                 TRNS,                TRNS, TRNS,  APP,          MPRV, VOLD, MNXT
  ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};