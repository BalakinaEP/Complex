#include <iostream>
#include <string>
#include "Complex.h"

double getValue(const string& message);

int main()
{
  setlicale(LC_ALL,"Russian");
  
  double re = getValue ("Введите действительную часть числа: ");
  double im = getValue ("Введите мнимую часть числа: ");
  Complex z1(re,im);
  
  re = getValue ("Введите действительную часть числа: ");
  im = getValue ("Введите мнимую часть числа: ");
  Complex z2(re,im);

  std::cout << "Модуль комплексного числа z1 равен: " << z1.getModule()<<endl;
  std::cout << "Угол комплексного числа z1 равен: " << z1.getAngle()<<endl;
  std::cout << "Сумма z1 + z2 = " << z1 + z2 << endl;
  
  return 0;
}

double getValue(const string& message)
{
  std::cout << message << endl;
  double value = 0.0;
  cin >> value;
  return value;
}

  
