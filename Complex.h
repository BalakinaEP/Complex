#pragma once

class Complex
{
  private:
    double re;
    double im;
  public:
  Complex(const double re = 0, const double im = 0);
  double getModule() const;
  double getAngle() const;
  Complex operator+(const Complex& other);
  Complex operator-(const Complex& other);
  Complex operator*(const Complex& other);
  Complex operator*(const double other);
  Complex operator/(const Complex& other);
  bool operator==(const Complex& other);
};
