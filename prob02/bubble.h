#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"

class Bubble {
 public:
  Bubble(int x, int y, int radi, graphics::Color clr);

  // Setting functions
  void SetX(int x);
  void SetY(int y);
  void SetRadius(int radius);
  void SetClr(graphics::Color clr);

  // Grabbing functions
  int GrabX();
  int GrabY();
  int GrabRadius();
  graphics::Color GrabClr();

  // String return
  std::string ToString();

 private:
  // Variables
  int _x;
  int _y;
  int _radi;
  graphics::Color _clr;
};
