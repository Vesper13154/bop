#include <stdlib.h>

#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"

using graphics::Image;
using namespace std;
Image my_image(50, 5 0);

int HexToInteger(string hex) {
  // Only works on strings length 2.
  if (hex.size() != 2) {
    return -1;
  }
  // Convert hex string, base 16 string, to integer.
  const int kBaseSixteen = 16;
  return strtoul(hex.c_str(), nullptr, kBaseSixteen);
}

int main() {
  string hexi;
  string red_hex;
  string green_hex;
  string blue_hex;
  int red = 0;
  int green = 0;
  int blue = 0;
  string bmp;
  cout << "Enter a hex code: ";
  cin >> hexi;
  red_hex = hexi.substr(0, 2);
  green_hex = hexi.substr(2, 2);
  blue_hex = hexi.substr(4, 2);
  red = HexToInteger(red_hex);
  green = HexToInteger(green_hex);
  blue = HexToInteger(blue_hex);
  my_image.DrawRectangle(0, 0, 50, 50, red, green, blue);
  bmp = hexi + ".bmp";
  my_image.SaveImageBmp(bmp);
  cout << "Color swatch saved to " << bmp << endl;
  return 0;
}