// History.h

class History
{
 public:
  History(int nRows, int nCols);
  bool record(int r, int c);
  void display() const;
};
