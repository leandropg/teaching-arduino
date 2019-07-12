/**
 *  @file input.ino
 *  @brief Example Digital Inputs
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

#define LED       10
#define PULSADOR  11

/**
 * Setup Function
 */
void setup() {
  
  // Set Pin PULSADOR as Input with Pull Up
  pinMode(PULSADOR, INPUT_PULLUP);

  // Set Pin LED as Output
  pinMode(LED, OUTPUT);
}

/**
 * Loop Function
 */
void loop() {

  // Check Pulsador State
  if (digitalRead(PULSADOR) == LOW) {

    // Set LED in HIGH
    digitalWrite(LED, HIGH);

  } else {

    // Set LED in LOW
    digitalWrite(LED, LOW);
  }
}
