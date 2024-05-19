/* Copyright 2022 Jose Pablo Ramirez <jp.ramangulo@gmail.com>
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"



#    define NA NO_LED

/* RGB Positioning */
led_config_t g_led_config = {{  {NA, NA, NA, NA}, 
                                {0, 3, 6, 9},
                                {1, 4, 7, 10},
                                {2, 5, 8, 11}},
                             {{0, 0}, {0, 32}, {0, 64}, {75, 0}, 
                            {75, 32}, {75, 64}, {150, 0}, {150, 32}, 
                            {150, 64}, {224, 0}, {224, 32}, {224,64}},
                             {4,4,4,4,4,4,4,4,4,4,4,4}};

// void suspend_power_down_kb(void) {
//     rgb_matrix_set_suspend_state(true);
//     suspend_power_down_user();
// }

// void suspend_wakeup_init_kb(void) {
//     rgb_matrix_set_suspend_state(false);
//     suspend_wakeup_init_user();
// }