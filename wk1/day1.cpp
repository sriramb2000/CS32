#include <iostream>
using namespace std;

#define PI 3.14

class Circle
{
 public:
  Circle(double x, double y, double r);
  bool scale(double factor);
  void draw();
  //when member function is called, object not modified
  double get_radius() const;
 //Class invariant
 //m_r > 0
 private:
  double m_x, m_y, m_r;
};

double area(const Circle& x);

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
  return PI * x.get_radius() * x.get_radius(); 
}
