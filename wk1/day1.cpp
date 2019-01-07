#include <iostream>
using namespace std;

#define PI 3.14

class Circle
{
 public:
  Circle(double x, double y, double r);
  void scale(double factor);
  void draw();
  double get_radius();
 private:
  double m_x, m_y, m_r;
};

double area(Circle x);

int main()
{
  Circle c(8, -3, 3.7);
  Circle d(-2, 5, 10);
  d.scale(2);
  d.draw();
  cout << area(d) << endl;
  return 0;
}

Circle::Circle(double x, double y, double r)
  :m_x(x), m_y(y), m_r(r)
{

}

void Circle::scale(double factor)
{
  m_r *= factor;
}

void Circle::draw()
{
  return;
}

double Circle::get_radius()
{
  return m_r;
}

double area(Circle x)
{
  return PI * x.get_radius() * x.get_radius(); 
}
