#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {  
lcd.begin(16, 2);
lcd.print("Prochniak");
}

void loop() {  
    lcd.setCursor(15, 1);
    lcd.print(millis() / 1000);
    delay(500);
}