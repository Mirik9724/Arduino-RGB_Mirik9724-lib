#pragma once
#include <Arduino.h>
class RGB_Mirik9724 {
  public:
    RGB_Mirik9724(int pinR, int pinG, int pinB);
    void color_m(int c);
    void rgb_m(int r, int g, int b);
  private:
  int _pinR;
  int _pinG;
  int _pinB;
};
