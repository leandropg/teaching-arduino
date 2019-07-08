/**
 *  @file lcd-analogIn.ino
 *  @brief Example LCD and Analog In
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
#define  LED  10
#define  POT  A0

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

int adcValue;
float voltsValue;

/**
 * Setup Function
 */
void setup() {

  // Set Pin LED as Output
  pinMode(LED, OUTPUT);

  // Init LCD Module
  lcd.begin(16, 2);

  // Show Line 1
  lcd.setCursor(0, 0);
  lcd.print("Val.Digital:");
  
  // Show Line 2
  lcd.setCursor(0, 1);
  lcd.print("Val.Volts:     V");
}

/**
 * Loop Function
 */
void loop() {

  // Obtain Analog Value
  adcValue = analogRead(POT);

  // Show Digital Value
  lcd.setCursor(12, 0);
  lcd.print("    ");
  lcd.setCursor(12, 0);
  lcd.print(adcValue);

  // Obtain Volts Value
  voltsValue = (adcValue * 5.00) / 1023;

  // Show Volts Value
  lcd.setCursor(11, 1);
  lcd.print(voltsValue);

  // Set LED in HIGH
  digitalWrite(LED, HIGH);

  // Delay 100 ms
  delay(100);
 
  // Set LED in LOW
  digitalWrite(LED, LOW);
 
   // Delay 100 ms
  delay(100);
}
