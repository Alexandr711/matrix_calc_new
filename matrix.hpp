#include <iostream>
#include <memory>

class Matrix
{
  public:
  Matrix(int, int);
  Matrix();
  ~Matrix();

  private:
  int numberStr;
  int numberCols;
  shared_ptr<long double[][]> matrix;
}
