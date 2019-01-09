// Circle.cpp

#include "Circle.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

Circle::Circle(double x, double y, double r)
  :m_x(x), m_y(y)
{
  if(r <= 0)
  {
    cerr << "Cannot create a circle with radius " << r << endl;
    exit(1);
  }
}

bool Circle::scale(double factor)
{
  if(factor < 0)
  {
    return false;
  }
  m_r *= factor;
  return true;
}

void Circle::draw()
{
  return;
}

double Circle::get_radius() const
{
  return m_r;
}

double area(const Circle& x)
{
  return atan(1.0) * 4 * x.get_radius() * x.get_radius(); 
}
