
#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
 
  lcd.begin(16, 2);
  lcd.setCursor(0,0);

  lcd.print("I AM READY");
  Serial.begin(9600);
  
}

void loop() {
  
  lcd.setCursor(0, 1);
  if (Serial.available()>0)
  {
    Serial.println("OK");
    lcd.print(Serial.readString());
  }
}
 
