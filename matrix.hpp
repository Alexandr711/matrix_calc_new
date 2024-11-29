#include <iostream>
#include <vector>

class Matrix
{
  public:
  Matrix(int, int);
  Matrix();
  Matrix(const Matrix&);
  ~Matrix();


  void createMatrix(int,int);
  void matrixMulNumber(long double);
  void matrixDivNumber(long double);
  long double determinate();
  Matrix operator+(Matrix);
  Matrix operator-(Matrix);
  Matrix operator*(Matrix);
  Matrix operator=(Matrix);
  istream &operator>>(istream&, Matrix&);

  private:
  int numberStr;
  int numberCols;
  std::vector<std::vector<long double>> matrix;
}
