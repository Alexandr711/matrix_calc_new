#include "matrix.hpp"

Matrix::Matrix()
{
  numberString = 0;
  numberCols = 0;
  matrix{};
}

Matrix::Matrix(int str, int cols): numberString(str), numberCols(cols)
{
  matrix.assign(numberString, std::vector<long double>(numberCols));
}

//Конструктор копирования
Matrix::Matrix(const Matrix &op)
{
  numberStr = op.numberStr;
  numberCols = op.numberCols;
  matrix.resize(numberStr, std::vector<long double>(numberCols));
  for(int i = 0; i < numberStr; ++i)
    {
      for(int j = 0; j < numberCols; ++j)
        {
          matrix[i][j] = op.matrix[i][j];
        }
    }
}

//перегрузка операторов
//----------------------------------------------------------------------

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

//операция перемножения матриц
Matrix Matrix::operator*(Matrix op)
{
  Matrix result(numberStr, op.numberCols);
  for(int i = 0; i < result.numberStr; ++i)
    {
      for(int j = 0; j < result.numberCols; ++j)
        {
          for(int k = 0; k < result.numberCols; ++k)
            {
              result.matrix[i][j] += matrix[i][k] * op.matrix[k][j];
            }
        }
    }
  return result;
}

//перегрузка операторов ввода вывода

istream &operator>>(istream &stream, Matrix op)
{
  stream >> op.numberStr;
  stream >> op.numberCols;
  for(int i = 0; i < op.numberStr; ++i)
    {
      for(int j = 0; j < op.numberCols; ++j)
        {
          stream >> op.matrix[i][j];
        }
    }
  return stream;
}

//-------------------------------------------------------------------------

//создание и заполнение матрицы числами
void Matrix::createMatrix(int str, int cols)
{
  
}

//умножение матрицы на число
void Matrix::matrixMulNumber(long double number)
{
  for(int i = 0; i < str; ++i)
    {
      for(int j = 0; j < cols; ++j)
        {
          matrix[i][j] *= number;
        }
    }
}

//деление матрицы на число

void Matrix::matrixMulNumber(long double number)
{
  for(int i = 0; i < str; ++i)
    {
      for(int j = 0; j < cols; ++j)
        {
          matrix[i][j] = matrix[i][j]/number;
        }
    }
}





