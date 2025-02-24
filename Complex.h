#pragma once

class Complex
{
  private:
    double Re;
    double Im;
  public:
  double getModule() const;
  double getAngle() const;
  double getSum(const Complex& other);
  double getDif(const Complex& other);
  double getMul(const Complex& other);
(const Complex& other);

  
};
