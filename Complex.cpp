#incude <cmath>
#incude "Complex.h"

Complex::Complex(const double re = 0, const double im = 0):
im{im}, re{re}
{
}

double Complex::getModule() const
{
  return std::sqtr(re * re + im * im);
}

double Complex::getAngle() const
{
  return atan(im/re);
}

double Complex::operator+(const Complex& other)
{
  double newRe = re + other.re;
  double newIm = im + other.im;
  return Complex(newRe, newIm);
}

double Complex::operator-(const Complex& other)
{
  double newRe = re - other.re;
  double newIm = im - other.im;
  return Complex(newRe, newIm);
}

double Complex::operator*(const Complex& other)
{
  double newRe = re * other.re + im * other.im;
  double newIm = im * other.re + re * other.im;
  return Complex(newRe, newIm);
}

double Complex::operator/(const Complex& other)
{
  double newRe = (re * other.re + im * other.im) / (other.re * other.re + other.im * other.im);
  double newIm = (im * other.re - re * other.im) / (other.re * other.re + other.im * other.im);
  return Complex(newRe, newIm);
}

bool Complex::operator==(const Complex& other)
{
  return re == other.re && im == other.im
}
