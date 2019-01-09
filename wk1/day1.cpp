// day1.cpp
// to compile and link g++ -o name ...list files starting w/ main

#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
  Circle c(8, -3, -3.7);
  Circle d(-2, 5, 10);
  d.scale(2);
  d.draw();
  cout << area(d) << endl;
  return 0;
}
