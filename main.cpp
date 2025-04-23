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
  Complex z2;
  cin >> z2;
  std::cout << "Модуль комплексного числа z1 равен: " << z1.getModule()<<endl;
  std::cout << "Угол комплексного числа z1 равен: " << z1.getAngle()<<endl;
  Complex result = z1 + z2;
  std::cout << "Сумма z1 + z2 = " << result;
  result = z1 - z2;
  std::cout << "Разность z1 - z2 = " << result;
  result = z1 * z2;
  std::cout << "Произведение z1 * z2 = " << result;
  result = z1 / z2;
  std::cout << "Деление z1 / z2 = " << result;;
  double coef = getValue("Введите константу: ");
  result = z1 * coef;
  std::cout << "Произведение z2 * " 
      << coef <<" = " << result; 
  result = coef * z1;
  std::cout << "Произведение " 
      << coef <<" * z2 = " << result.toString();
  return 0;
}

double getValue(const string& message)
{
  std::cout << message << endl;
  double value = 0.0;
  cin >> value;
  return value;
}

  
