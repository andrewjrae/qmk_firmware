#pragma once

#define TAPPING_TERM 185
/* One shot config */
// TODO: make it so mods can't lock mode but layers can
//       preferably two taps for layerS
/* #define ONESHOT_TAP_TOGGLE 2 */
#define ONESHOT_TIMEOUT 2000

/* Default all the mods to be one shot */
#define MY_LSFT OSM(MOD_LSFT)
#define MY_RSFT OSM(MOD_RSFT)

#define MY_LCTL OSM(MOD_LCTL)
#define MY_RCTL KC_RCTL

/* #define MY_LGUI OSM(MOD_LGUI) */
#define MY_LGUI KC_LGUI
#define MY_RGUI OSM(MOD_RGUI)

#define MY_LALT OSM(MOD_LALT)
#define MY_RALT OSM(MOD_RALT)

#define MY_SPC  LT(NUM_L, KC_SPC)

/* Define some simple vi motions */
#define VI_B   LCTL(KC_LEFT)
#define VI_W   LCTL(KC_RIGHT)
