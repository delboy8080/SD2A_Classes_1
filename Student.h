#pragma once

#include <string>
using namespace std;
//id, name, age, height.
class Student
{
    int id;
    string name;
    int age;
    double height;
public:
    Student();
    Student(int id,string name,int age,double height);

    int getID();
    string getName();
    int getAge();
    double getHeight();

    void setID(int id);
    void setName(string name);
    void setAge(int age);
    void setHeight(double height);
};