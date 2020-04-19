#include "Complex.h"

#define _a c1.getRe()
#define _b c1.getIm()
#define _c c2.getRe()
#define _d c2.getIm()

namespace complexnumbers {

	Complex::Complex() : re(0), im(0)
	{
	}

	Complex::Complex(double re, double im) : re(re), im(im)
	{
	}

	Complex::Complex(const Complex& other)
	{
		re = other.re;
		im = other.im;
	}

	const Complex &Complex::operator=(const Complex &other)
	{
		re = other.re;
		im = other.im;

		return *this;
	}

	bool Complex::operator==(const Complex& other) const
	{
		return re == other.re && im == other.im;
	}

	ostream &operator<<(ostream &out, const Complex &c)
	{
		out << "(" << c.getRe() << "," << c.getIm() << ")";
		return out;
	}

	istream &operator>>(istream &in, Complex &c)
	{
		in >> c.re;
		in >> c.im;
		return in;
	}

	Complex operator+(const Complex &c1, const Complex &c2)
	{
		return Complex(c1.getRe() + c2.getRe(), c1.getIm() + c2.getIm());
	}

	Complex operator+(const Complex &c1, double d)
	{
		return Complex(c1.getRe() + d, c1.getIm());
	}

	Complex operator+(double d, const Complex &c1)
	{
		return Complex(c1.getRe() + d, c1.getIm());
	}

	Complex operator-(const Complex &c1, const Complex &c2)
	{
		return Complex(c1.getRe() - c2.getRe(), c1.getIm() - c2.getIm());
	}

	Complex operator-(const Complex &c1, double d)
	{
		return Complex(c1.getRe() - d, c1.getIm());
	}

	Complex operator-(double d, const Complex &c1)
	{
		return Complex(c1.getRe() - d, c1.getIm());
	}

	Complex operator*(const Complex &c1, const Complex &c2)
	{
		//return Complex(c1.getRe()*c2.getRe() - c1.getIm() * c2.getIm(), c1.getIm() * c2.getRe() + c1.getRe() * c2.getIm());
		return Complex(_a * _c - _b * _d, _b * _c + _a * _d);
	}

	Complex operator/(const Complex &c1, const Complex &c2)
	{
		//return Complex((c1.getRe() * c2.getRe() + c1.getIm() * c2.getIm()) / (c2.getRe() * c2.getRe() + c2.getIm() * c2.getIm()), (c1.getIm() * c2.getRe() - c1.getRe() * c2.getIm()) / (c2.getRe() * c2.getRe() + c2.getIm() * c2.getIm()));
		return Complex((_a * _c + _b * _d) / (_c * _c + _d * _d), (_b * _c - _a * _d) / (_c * _c + _d * _d));
	}

}