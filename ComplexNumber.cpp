//
// Created by floodd on 23/03/2022.
//
#include "ComplexNumber.h"
ComplexNumber::ComplexNumber(int r, int i)
{
    this->real = r;
    this->imaginary = i;
}
int ComplexNumber::getReal()
{
    return real;
}
int ComplexNumber::getImaginary()
{
    return imaginary;
}
void ComplexNumber::setReal(int r)
{
    this->real = r;
}
void ComplexNumber::setImaginary(int i)
{
    this->imaginary = i;
}