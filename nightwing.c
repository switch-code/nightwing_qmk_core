/* Copyright 2021 Alexander Ding (@switch-code)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#include "nightwing.h"
#include "quantum.h"


#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = { {
    {  19,  20,  21,  22,  23,   24 },
    {  30,  29,  28,  27,  26,   25 },
    {  31,  32,  33, 34, 35,   36 },
    {  NO_LED, 41, 40, 37, 39, 38 },

    {  61,  62,  63,  64,  65,   66 },
    {  72,  71,  70,  69,  68,   67 },
    {  73,  74,  75, 76, 77, 78 },
    {  NO_LED, 83, 82, 79, 81, 80 },

}, {
    // {  85,  16 }, {  50,  13 }, {  16,  20 }, {  16,  38 }, {  50,  48 }, {  85,  52 }, {  95,  63 },
    // {  85,  39 }, {  85,  21 }, {  85,   4 }, {  68,   2 }, {  68,  19 } {  68,  37 }, {  80,  58 },
    // {  60,  55 }, {  50,  35 }, {  50,  13 }, {  50,   0 }, {  33,   3 }, 
    // {  45,  20 }, {  45,  37 },
    // {  45,  42 }, {  45,  24 }, {  45,   7 }, {   45,   7 }, {   0,  24 }, {   0,  41 }, { 139,  16 },
    // { 174,  13 }, { 208,  20 }, { 208,  38 }, { 174,  48 }, { 139,  52 }, { 129,  63 }, { 139,  39 },
    // { 139,  21 }, { 139,   4 }, { 156,   2 }, { 156,  19 }, { 156,  37 }, { 144,  58 }, { 164,  55 },
    // {  85,  16 }, {  50,  13 }, {  16,  20 }, {  16,  38 }, {  50,  48 }, {  85,  52 }, {  95,  63 },
    // {  85,  39 }, {  85,  21 }, {  85,   4 }, {  68,   2 }, {  68,  19 }, {  68,  37 }, {  80,  58 },
    // {  60,  55 }, {  50,  35 }, {  50,  13 }, {  50,   0 }, {  33,   3 }, {  33,  20 }, {  33,  37 },
    // {  16,  42 }, {  16,  24 }, {  16,   7 }, {   0,   7 }, {   0,  24 }, {   0,  41 }, { 139,  16 },
    // { 174,  13 }, { 208,  20 }, { 208,  38 }, { 174,  48 }, { 139,  52 }, { 129,  63 }, { 139,  39 },
    // { 139,  21 }, { 139,   4 }, { 156,   2 }, { 156,  19 }, { 156,  37 }, { 144,  58 }, { 164,  55 }
    // { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, 
    // { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, { 0,0 }, 
    { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 },
    { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 },

    { 0, 13 }, { 16, 13 }, { 32, 13 }, { 48, 13 }, { 64, 13 }, { 80, 13 },
    { 80, 26 }, { 64, 26 }, { 48, 26 }, { 32, 26 }, { 16, 26 }, { 0, 26 },
    { 0, 39 }, { 16, 39 }, { 32, 39 }, { 48, 39 }, { 64, 39 }, { 80, 39 },
    { 110, 62 }, { 94, 62 }, { 80, 62 }, { 66, 62 }, { 50, 62 }, 



    // { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, 
    // { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, { 112,0 }, 
    { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 },
    { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 }, { 0, 8 },

    { 224, 13 }, { 208, 13 }, { 192, 13 }, { 176, 13 }, { 160, 13 }, { 144, 13 },
    { 144, 26 }, { 160, 26 }, { 176, 26 }, { 192, 26 }, { 208, 26 }, { 224, 26 },
    { 224, 39 }, { 208, 39 }, { 192, 39 }, { 176, 39 }, { 160, 39 }, { 144, 39 },
    { 128, 62 }, { 134, 62 }, { 144, 62 }, { 160, 62 }, { 176, 62 },


}, {
     LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
     LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
     4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,  
     LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
     LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
     4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4
} };

#define RLO 42
#define LLI(x) (x)
// #define {x,y) ((x),(y))
#define RLI(x) (RLO+(x))
#define RLP(x,y) {(224-(x)),((y))}

// led_config_t g_led_config = {
//     {
//         // Key Matrix to LED Index
//         { LLI(0),  LLI(1),  LLI(2),  LLI(3),  LLI(4),  LLI(5) },
//         { LLI(11), LLI(10), LLI(9),  LLI(8),  LLI(7),  LLI(6) },
//         { LLI(12), LLI(13), LLI(14), LLI(15), LLI(16), LLI(17) },
//         { LLI(22), LLI(21), LLI(20), LLI(19), LLI(18) },

//         { RLI(36), RLI(37), RLI(38), RLI(39), RLI(40), RLI(41), RLI(42) },
//         { RLI(35), RLI(34), RLI(33), RLI(32), RLI(31), RLI(30), RLI(29) },
//         { RLI(22), RLI(23), RLI(24), RLI(25), RLI(26), RLI(27), RLI(28) },
//         { RLI(21), RLI(20), RLI(19), RLI(18), RLI(17), RLI(16), RLI(15) },
//         {  NO_LED,  NO_LED,  NO_LED, RLI(11), RLI(12), RLI(13), RLI(14) },
//         {  NO_LED,  NO_LED,  NO_LED,  NO_LED, NO_LED,  NO_LED,  NO_LED, },
//     },
//     {
//         // Matrix left
//         { 78, 150 }, { 104, 150 }, {130, 150 }, {156, 150 }, {156, 150 }, 
//         {156, 120 }, {130, 120 }, {104, 120 }, { 78, 120 }, { 52, 120 }, { 26, 120 }, 
//         {  0,  90 }, { 26,  90 }, { 52,  90 }, { 78,  90 }, {104,  90 }, {130,  90 }, 
//         {156,  60 }, {130,  60 }, {104,  60 }, { 78,  60 }, { 52,  60 }, 
//         // Underglow right
//         // Matrix right
//         // RLP( 78, 150), RLP(104, 150), RLP(130, 150), RLP(156, 150),
//         // RLP(156, 120), RLP(130, 120), RLP(104, 120), RLP( 78, 120), RLP( 52, 120), RLP( 26, 120), RLP(  0, 120),
//         // RLP(  0,  90), RLP( 26,  90), RLP( 52,  90), RLP( 78,  90), RLP(104,  90), RLP(130,  90), RLP(156,  90),
//         // RLP(156,  60), RLP(130,  60), RLP(104,  60), RLP( 78,  60), RLP( 52,  60), RLP( 26,  60), RLP(  0,  60),
//         // RLP(  0,  30), RLP( 26,  30), RLP( 52,  30), RLP( 78,  30), RLP(104,  30), RLP(130,  30), RLP(156,  30),
//     },
//     {
//         // LED Index to Flag
//         // Matrix left
//         LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
//         LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, 
//         LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
//         LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, 
//     }
// };





#endif


