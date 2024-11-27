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
  matrix operator+(matrix);
  matrix operator-(matrix);
  matrix operator*(matrix);
  

  private:
  int numberStr;
  int numberCols;
  std::vector<std::vector<long double>> matrix;
}
