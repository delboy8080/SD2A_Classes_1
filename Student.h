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

    int getID() const;
    string getName() const;
    int getAge() const;
    double getHeight() const;

    void setID(int id);
    void setName(string name);
    void setAge(int age);
    void setHeight(double height);
};