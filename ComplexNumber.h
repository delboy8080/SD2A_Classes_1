//
// Created by floodd on 23/03/2022.
//

#ifndef SD2A_CLASSES_1_COMPLEXNUMBER_H
#define SD2A_CLASSES_1_COMPLEXNUMBER_H
class ComplexNumber
{
    int real;
    int imaginary;
public:
    ComplexNumber(int r=0, int i=0);
    int getReal();
    int getImaginary();
    void setReal(int r);
    void setImaginary(int i);

};

#endif //SD2A_CLASSES_1_COMPLEXNUMBER_H
