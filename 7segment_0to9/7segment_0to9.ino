#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

int counter;

void setup()
{
  led_display1.begin(112);

}

void loop()
{
  for (counter = 0; counter < 10; ++counter) {
    led_display1.println(counter);
    led_display1.writeDisplay();
    delay(1000);
    
  }
  while(counter=10){
  led_display1.clear();
  led_display1.writeDisplay();                
  led_display1.setBrightness(0000); 
  }
  
}
