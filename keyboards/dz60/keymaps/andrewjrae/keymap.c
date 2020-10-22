#include QMK_KEYBOARD_H

enum keyboard_layers {
    BASE_L = 0,
    NAV_L,
    NUM_L = 5,
};

enum custom_keycodes {
    MY_ESC = SAFE_RANGE,
    VI_YANK,
    VI_CUT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE_L] = LAYOUT_60_ansi(MY_ESC,     KC_1,    KC_2,    KC_3,   KC_4,    KC_5,       KC_6,       KC_7,     KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
                              KC_TAB,     KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,       KC_Y,       KC_U,     KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
                              OSL(NAV_L), KC_A,    KC_S,    KC_D,   KC_F,    KC_G,       KC_H,       KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
                              MY_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,       KC_N,       KC_M,     KC_COMM, KC_DOT,  KC_SLSH, MY_RSFT,
                              MY_LCTL,    MY_LGUI, MY_LALT, MY_SPC, MY_RALT, OSL(NAV_L), OSL(NAV_L), MY_RCTL),

    [NAV_L] = LAYOUT_60_ansi(MY_ESC,      KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,      KC_F6,      KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
                             KC_TRNS,     KC_NO,   VI_W,    KC_END, KC_NO,   KC_NO,      KC_NO,      KC_NO,    KC_HOME, KC_NO,   KC_NO,   KC_VOLD, KC_VOLU, KC_TRNS,
                             KC_TRNS,     KC_NO,   KC_NO,   KC_DEL, KC_NO,   KC_NO,      KC_LEFT,    KC_DOWN,  KC_UP,   KC_RGHT, KC_NO,   KC_NO,   KC_TRNS,
                             KC_TRNS,     KC_NO,   KC_NO,   KC_NO,  KC_NO,   VI_B,       KC_NO,      KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
                             KC_TRNS,     KC_TRNS, KC_TRNS, OSL(2), KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS),

    [2] = LAYOUT_60_ansi(TO(BASE_L), KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(3),   KC_NO,   KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   OSL(4),  KC_NO,   KC_NO,   KC_NO,   KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO),

    [3] = LAYOUT_60_ansi(TO(BASE_L), KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, RGB_TOG, RGB_M_P, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_NO, KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   RGB_VAI, RGB_VAD, KC_TRNS, KC_NO,   KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO),

    [4] = LAYOUT_60_ansi(TO(BASE_L), KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MPLY, KC_NO, KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_NO,   KC_NO, KC_MPRV, KC_MNXT, KC_MUTE, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                         KC_NO,      KC_NO, KC_NO, KC_MSTP, KC_NO, KC_NO,   KC_NO,   KC_NO),

    [NUM_L] = LAYOUT_60_ansi(TO(BASE_L), KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8, KC_F9, KC_F10, KC_F11,  KC_F12,  KC_TRNS,
                             KC_TRNS,    KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO,  KC_NO,   KC_NO,   KC_TRNS,
                             KC_TRNS,    KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,     KC_8,  KC_9,  KC_0,   KC_NO,   KC_TRNS,
                             KC_TRNS,    KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO,  KC_TRNS,
                             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MY_ESC:
        if (record->event.pressed) {
            bool cleared_state = 0;
            if (get_oneshot_locked_mods()) {
                unregister_mods(get_oneshot_locked_mods());
                clear_oneshot_locked_mods();
                clear_oneshot_mods();
                cleared_state = 1;
            }
            if (layer_state_is(NAV_L)) {
                reset_oneshot_layer();
                layer_move(BASE_L);
                cleared_state = 1;
            }
            if (!cleared_state) {
                uint8_t oneshot_mods = get_oneshot_mods();
                if (oneshot_mods) {
                    clear_oneshot_mods();
                }
                uint8_t mods = get_mods() | oneshot_mods;
                if (mods & MOD_BIT(KC_RSFT)) {
                    SEND_STRING("~");
                }
                else if (oneshot_mods & MOD_BIT(KC_LSFT)) {
                    SEND_STRING("`");
                }
                else if (mods & MOD_BIT(KC_LSFT)) {
                    unregister_code(KC_LSFT);
                    SEND_STRING("`");
                    register_code(KC_LSFT);
                }
                else {
                    tap_code(KC_ESC);
                }
            }
        } else {
            // no action on release
        }
        break;
    default:
        break;
    }
    return true;
}
