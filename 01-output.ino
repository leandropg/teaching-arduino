/**
 *  @file output.ino
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

#define LED       10

/**
 * Setup Function
 */
void setup() {
  
  // Set Pin LED as Output
  pinMode(LED, OUTPUT);
}

/**
 * Loop Function
 */
void loop() {

  // Set LED in HIGH
  digitalWrite(LED, HIGH);

  // Delay 100 ms
  delay(100);
 
  // Set LED in LOW
  digitalWrite(LED, LOW);
 
   // Delay 100 ms
  delay(100);
}
