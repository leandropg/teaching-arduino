/**
 *  @file lcd.ino
 *  @brief Example Digital Outputs
 *  @date 10/05/2019
 *  @version 1.0.0
 *
 *  Copyright (C) 2019  Leandro Perez Guatibonza
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <LiquidCrystal.h>

#define  RS   2
#define  EN   3
#define  D4   4
#define  D5   5
#define  D6   6
#define  D7   7

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

/**
 * Setup Function
 */
void setup() {

  // Init LCD Module
  lcd.begin(16, 2);

  // Show User Message
  lcd.print("Charla Arduino Teravision 2019");
}

/**
 * Loop Function
 */
void loop() {

  // Scroll Text 32 positions
  for (int i = 0; i < 32; i++) {

      // Scroll Text to Left one position
      lcd.scrollDisplayLeft();

      // Delay 200 ms
      delay(200);
  }
}
