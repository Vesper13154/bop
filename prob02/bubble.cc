#include <iostream>
#include <string>

#include "bubble.h"

#include "cpputils/graphics/image.h"

Bubble::Bubble(int x, int y, int radi, graphics::Color clr) {
  _x = x;
  _y = y;
  _radi = radi;
  _clr = clr;
}

void Bubble::SetX(int x) { _x = x; }
void Bubble::SetY(int y) { _y = y; }
void Bubble::SetRadius(int radi) { _radi = radi; }
void Bubble::SetClr(graphics::Color clr) { _clr = clr; }

int Bubble::GrabX() { return _x; }
int Bubble::GrabY() { return _y; }
int Bubble::GrabRadius() { return _radi; }
graphics::Color Bubble::GrabClr() { return _clr; }

std::string Bubble::ToString() {
  return "Bubble at (" + std::to_string(_x) + ", " + std::to_string(_y) +
         ") with size " + std::to_string(_radi);
}
