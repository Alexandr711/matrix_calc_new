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

//Конструктор копирования
Matrix::Matrix(const Matrix &op)
{
  numberStr = op.numberStr;
  numberCols = op.numberCols;
  for(int i = 0; i < numberStr; ++i)
    {
      for(int j = 0; j < numberCols; ++j)
        {
          matrix[i][j] = op.matrix[i][j];
        }
    }
}

Matrix Matrix::operator+(Matrix matrixOne)
{
  Matrix tempMatrix(numberStr, numberCols);
  for(int i = 0; i < numberStr; ++i)
    {
    for(int j = 0; j < numberCols; ++j)
      {
        tempMatrix.matrix[i][j] = matrixOne.matrix[i][j] + matrix[i][j];
      }
    }
  return tempMatrix;
  }

Matrix Matrix::operator-(Matrix matrixOne)
{
  Matrix tempMatrix(numberStr, numberCols);
  for(int i = 0; i < numberStr; ++i)
    {
      for(int j = 0; j < numberCols; ++j)
        {
          tempMatrix.matrix[i][j] = matrix[i][j] - matrixOne[i][j];
        }
    }
  return tempMatrix;
}

Matrix Matrix::operator=(Matrix op)
{
  numberStr = op.numberStr;
  numberCols = op.numberStr;
  for(int i = 0; i < numberStr; ++i)
    {
      for(int j = 0; numberCols; ++j)
        {
          matrix[i][j] = op.matrix[i][j];
        }
    }
  return *this;
}

Matrix Matrix::operator*(Matrix op)
{
  Matrix result;
  result.numberStr = 
}





