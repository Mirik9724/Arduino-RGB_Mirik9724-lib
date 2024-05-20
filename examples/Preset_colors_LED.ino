#include <RGB_Mirik9724.h>

For the library to work correctly, it is necessary to connect the RGB LED to the Analog input or digital inputs marked "~"

RGB_Mirik9724 myled(11, 10, 9);//pinR, pinG, pinB
void setup() {
  
}

void loop() {
  myled.color_m(2);//blue
  delay(1000);//delay 1 second

  myled.color_m(3);//green
  delay(1000);//delay 1 second

  myled.color_m(4);//yellow
  delay(1000);//delay 1 second

  myled.color_m(5);//red
  delay(1000);//delay 1 second

  myled.color_m(6);//white
  delay(1000);//delay 1 second

  myled.color_m(7);//light blue
  delay(1000);//delay 1 second

  myled.color_m(8);//purple
  delay(1000);//delay 1 second

  //if the number in color_m is not 2-8 inclusive then the LED will turn off

}
