#include "RGB_Mirik9724.h"
RGB_Mirik9724::RGB_Mirik9724(int pinR, int pinG, int pinB) {
  _pinR = pinR;
  _pinG = pinG;
  _pinB = pinB;
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void RGB_Mirik9724::rgb_m(int r, int g, int b) {
  analogWrite(_pinR, constrain(r, 0, 255));
  analogWrite(_pinG, constrain(g, 0, 255));
  analogWrite(_pinB, constrain(b, 0, 255));
}

void RGB_Mirik9724::color_m(int c){
  if(c == 2){
    rgb_m(0, 0, 255);//blue
  }
  if(c == 3){
    rgb_m(0, 0, 255);//green
  }
  if(c == 4){
    rgb_m(255, 255, 0);//yellow
  }
  if(c == 5){
    rgb_m(0, 0, 255);//red
  }
  if(c == 6){
    rgb_m(255, 255, 255);//white
  }
  if(c == 7){
    rgb_m(0, 0, 255);//light blue
  }
  if(c == 8){
    rgb_m(255, 0, 255);//purple
  }
  if(c<2 or c>8){
    rgb_m(0, 0, 0);//no color
  }
}
