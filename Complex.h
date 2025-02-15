#pragma once
#ifndef _COMPLEX_
#define _COMPLEX_

#include "Complex.h"
#include <iostream>
#include <cmath>

class Complex
{
private:
	double real, imag;
	double abs, arg, absI, argI;

public:
	Complex() {
		real = 0.0;
		imag = 0.0;
	}

	Complex(double real) {
		this->real = real;
		imag = 0.0;
	}

	Complex(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}

	void setReal(double a) {
		this->real = a;
	}

	void setImag(double b) {
		this->imag = b;
	}

	double getreal() {
		return this->real;
	}

	double getimag() {
		return this->imag;
	}

	double getAbs() {
		abs = std::sqrtl(real * real + imag * imag);
		return abs;
	}

	double getArg() {
		arg = std::atanl(imag / real);
		return arg;
	}

	Complex conj() {
		Complex res;
		res.real = this->real;
		res.imag = -this->imag;
		return res;
	}

	Complex add(Complex b) {
		Complex res;
		res.real = this->real + b.getreal();
		res.imag = this->imag + b.getimag();
		return res;

	}

	Complex mul(Complex b) {
		Complex res;
		res.real = this->real * b.getreal() - this->imag * b.getimag();
		res.imag = this->imag * b.getreal() + this->real * b.getimag();
		return res;

	}

	Complex sub(Complex b) {
		Complex res;
		res.real = this->real - b.getreal();
		res.imag = this->imag - b.getimag();
		return res;

	}
	Complex div(Complex b) {
		Complex res;
		res.real = (this->real * b.getreal() + this->imag * b.getimag()) / b.getreal() * b.getreal() + b.getimag() * b.getimag();
		res.imag = (this->imag * b.getreal() + this->real * b.getimag()) / b.getreal() * b.getreal() + b.getimag() * b.getimag();
		return res;
	}

	friend std::istream& operator>>(std::istream & in, Complex& a) {
		in >> a.real >> a.imag;
		return in;
	}

	friend std::ostream& operator<<(std::ostream& out, Complex a) {
		out << a.getreal() << "+(" << a.getimag() << "i)";
		return out;
	}

};



#endif _COMPLEX_
