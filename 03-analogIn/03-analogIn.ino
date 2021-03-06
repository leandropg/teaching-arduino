/**
 *  @file analogIn.ino
 *  @brief Example Analog Inputs
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
#define POT       A0
#define BUZZER    12

int value;

/**
 * Setup Function
 */
void setup() {

  // Init Serial Interface at 9600 bps
  Serial.begin(9600);

  // Set Pin LED as Output
  pinMode(LED, OUTPUT);

  // Set Pin LED as Output
  pinMode(BUZZER, OUTPUT);
}

/**
 * Loop Function
 */
void loop() {

  // Obtain Analog Value
  value = analogRead(POT);

  // Print Value
  Serial.println(value);

  // Check Analog Value
  if (value < 512) {

    // Set LED in HIGH
    digitalWrite(LED, HIGH);

    // Set BUZZER in LOW
    digitalWrite(BUZZER, LOW);

  } else {

    // Set LED in HIGH
    digitalWrite(LED, LOW);

    // Set BUZZER in HIGH
    digitalWrite(BUZZER, HIGH);
  }

  // Delay 500 ms
  delay(500);
}
