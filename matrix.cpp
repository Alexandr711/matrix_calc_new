#include "matrix.hpp"

Matrix::Matrix()
{
  numberString = 0;
  numberCols = 0;
  matrix{};
}

Matrix::Matrix(int str, int cols): numberString(str), numberCols(cols)
{
  for(int i = 0; i < str; ++i)
    {
      for(int j = 0; j < cols; ++j)
        {
          matrix[i][j] = 0;
        }
    }
}
