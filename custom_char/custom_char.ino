#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

byte thai1[8] = {0,14,17,9,9,9,9};
byte thai2[8] = {8,21,21,13,5,5,7};
byte thai3[8] = {21,27,19,5,5,5,7};
byte thai4[8] = {14,17,17,21,25,25,25};
byte thai5[8] = {10,21,17,29,25,25,17};
byte thai6[8] = {21,29,5,9,31,27,11};
void setup() {
  lcd.createChar(0, smiley);
  lcd.begin(16, 2);  
  lcd.write(byte(0));
}

void loop() {}
