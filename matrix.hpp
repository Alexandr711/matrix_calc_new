#include <iostream>
#include <memory>

class Matrix
{
  public:
  Matrix(int, int);
  Matrix();
  ~Matrix();

  createMatrix(int,int);
  matrixMulNumber(long double);
  matrixDivNumber(long double);
  determinate();
  Matrix operator+(Matrix);
  Matrix operator-(Matrix);
  Matrix operator*(Matrix);
  

  private:
  int numberStr;
  int numberCols;
  std::vector<std::vector<long double>> matrix;
}
