#pragma once
#include<iostream>
using namespace std;

namespace complexnumbers {

	class Complex
	{
	private:
		double re;
		double im;

	public:
		Complex();
		Complex(double re, double im);
		Complex(const Complex &other);
		const Complex &operator=(const Complex& other);

		double getRe() const { return re; }
		double getIm() const { return im; }

		friend istream &operator>>(istream& out, Complex& c);

		bool operator==(const Complex &other) const;
	};

	ostream& operator<<(ostream &out, const Complex &c);

	Complex operator+(const Complex &c1, const Complex &c2);
	Complex operator+(const Complex &c1, double d);
	Complex operator+(double d, const Complex &c1);

	Complex operator-(const Complex &c1, const Complex &c2);
	Complex operator-(const Complex &c1, double d);
	Complex operator-(double d, const Complex &c1);

	Complex operator*(const Complex &c1, const Complex &c2);
	Complex operator/(const Complex &c1, const Complex &c2);

};