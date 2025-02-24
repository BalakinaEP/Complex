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
  double getMul(const double other);
  double getDiv(const Complex& other);
  bool isEcual(const Complex& other);
};
