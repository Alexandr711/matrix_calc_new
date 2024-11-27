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
  std::vector<std::vector<long double>> matrix;
}
