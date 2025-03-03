#incude <cmath>
#incude <string>
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

Complex Complex::operator*(const double other)
{
    double newRe = re * other;
    double newIm = im * other;
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

bool Complex::operator!=(const Complex& other)
{
  return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Complex& z)
{
  os << z.re;
  if (z.im < 0)
  {
    os << z.im << "i" << std::endl;
  }
  else
  {
    os << "+" << z.im << "i" << std::endl;
  }
}

std::istream& operator>>(std::istream& is, const Complex& z)
{
  cout << " Введите действительную часть числа: ");
  is >> z.re;
  cout << " Введите мнимую часть числа: ");
  is >> z.im;
  return is;
}

Complex operator*(const double other, const Complex& z)
{
  return z * other; 
}

std::string toString() const
{
  std::string str = to_string(re);
  if (im < 0)
  {
    str += to_string(im) + "i\n";
  }
  else
  {
    str += "+" + to_string(im) + "i\n";
  }
  return str;
}
