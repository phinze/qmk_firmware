/* placeholder file */
#include QMK_KEYBOARD_H

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {

    /*{row | col << 4}
      |             {x=0..224, y=0..64}
      |              |                    modifier
      |              |                    | */
    {{0|(0<<4)},   {24.9*5, 16*0}, 0}, // LED 1 on right
    {{0|(1<<4)},   {24.9*6, 16*0}, 0}, // LED 2
    {{0|(2<<4)},   {24.9*7, 16*0}, 0}, // LED 3
    {{0|(3<<4)},   {24.9*8, 16*0}, 0}, // LED 4
    {{0|(4<<4)},   {24.9*9, 16*0}, 0}, // LED 5

    {{1|(5<<4)},   {24.9*5, 16*1}, 0}, // LED 6
    {{1|(6<<4)},   {24.9*6, 16*1}, 0}, // LED 7
    {{1|(7<<4)},   {24.9*7, 16*1}, 0}, // LED 8
    {{1|(8<<4)},   {24.9*8, 16*1}, 0}, // LED 9
    {{1|(9<<4)},   {24.9*9, 16*1}, 0}, // LED 10

    {{2|(5<<4)},   {24.9*5, 16*2}, 0}, // LED 11
    {{2|(6<<4)},   {24.9*6, 16*2}, 0}, // LED 12
    {{2|(7<<4)},   {24.9*7, 16*2}, 0}, // LED 13
    {{2|(8<<4)},   {24.9*8, 16*2}, 0}, // LED 14
    {{2|(9<<4)},   {24.9*9, 16*2}, 0}, // LED 15

    {{3|(5<<4)},   {24.9*5, 16*2}, 0}, // LED 16
    {{3|(6<<4)},   {24.9*6, 16*2}, 0}, // LED 17
    {{3|(7<<4)},   {24.9*7, 16*2}, 0}, // LED 18
    {{3|(8<<4)},   {24.9*8, 16*2}, 0}, // LED 19
    {{3|(9<<4)},   {24.9*9, 16*2}, 0}, // LED 20

    {{4|(6<<4)},   {24.9*6, 16*2}, 1}, // LED 21
    {{4|(7<<4)},   {24.9*7, 16*2}, 1}, // LED 22
    {{4|(8<<4)},   {24.9*8, 16*2}, 1}, // LED 23
    {{4|(9<<4)},   {24.9*9, 16*2}, 1}, // LED 24

    {{0|(0<<4)},   {24.9*4, 16*0}, 0}, // LED 1 on left
    {{0|(1<<4)},   {24.9*3, 16*0}, 0}, // LED 2
    {{0|(2<<4)},   {24.9*2, 16*0}, 0}, // LED 3
    {{0|(3<<4)},   {24.9*1, 16*0}, 0}, // LED 4
    {{0|(4<<4)},   {24.9*0, 16*0}, 0}, // LED 5

    {{1|(5<<4)},   {24.9*4, 16*1}, 0}, // LED 6
    {{1|(6<<4)},   {24.9*3, 16*1}, 0}, // LED 7
    {{1|(7<<4)},   {24.9*2, 16*1}, 0}, // LED 8
    {{1|(8<<4)},   {24.9*1, 16*1}, 0}, // LED 9
    {{1|(9<<4)},   {24.9*0, 16*1}, 0}, // LED 10

    {{2|(5<<4)},   {24.9*4, 16*2}, 0}, // LED 11
    {{2|(6<<4)},   {24.9*3, 16*2}, 0}, // LED 12
    {{2|(7<<4)},   {24.9*2, 16*2}, 0}, // LED 13
    {{2|(8<<4)},   {24.9*1, 16*2}, 0}, // LED 14
    {{2|(9<<4)},   {24.9*0, 16*2}, 0}, // LED 15

    {{3|(5<<4)},   {24.9*4, 16*2}, 0}, // LED 16
    {{3|(6<<4)},   {24.9*3, 16*2}, 0}, // LED 17
    {{3|(7<<4)},   {24.9*2, 16*2}, 0}, // LED 18
    {{3|(8<<4)},   {24.9*1, 16*2}, 0}, // LED 19
    {{3|(9<<4)},   {24.9*0, 16*2}, 0}, // LED 20

    {{4|(6<<4)},   {24.9*3, 16*2}, 1}, // LED 21
    {{4|(7<<4)},   {24.9*2, 16*2}, 1}, // LED 22
    {{4|(8<<4)},   {24.9*1, 16*2}, 1}, // LED 23
    {{4|(9<<4)},   {24.9*0, 16*2}, 1}, // LED 24
};
