#include <RGB_Mirik9724.h>

For the library to work correctly, it is necessary to connect the RGB LED to the Analog input or digital inputs marked "~"

RGB_Mirik9724 LED(11, 10, 9);//pinR, pinG, pinB
void setup() {
  
}

void loop() {
  rgb_m(255, 255, 255);//white
  delay(1000);//delay 1 second
  rgb_m(255, 0, 0);//red
  delay(1000);//delay 1 second
  rgb_m(0, 255, 0);//green
  delay(1000);//delay 1 second
  rgb_m(0, 0, 255);//blue
  delay(1000);//delay 1 second
  rgb_m(0, 0, 0);//off of Light-emitting diode
  delay(1000);//delay 1 second
}
