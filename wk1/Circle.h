// Circle.h

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

