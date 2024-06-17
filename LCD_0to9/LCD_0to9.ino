#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

int counter;

void setup()
{
  lcd_1.begin(16, 2);


}

void loop()
{
  lcd_1.setCursor(0, 0);
  for (counter = 0; counter < 10; ++counter) {
    lcd_1.print(counter);
    delay(1000);
    lcd_1.clear();
    
  }
  if(counter==10){
     lcd_1.setBacklight(0);
     lcd_1.noDisplay();  
    }
}
