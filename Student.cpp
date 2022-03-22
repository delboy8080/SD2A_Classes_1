#ifndef STUDENT_CLASS
#define STUDENT_CLASS

#include "Student.h"

Student::Student()
{
    id = 1;
    name = "Joe Bloggs";
    age = 18;
    height = 1.5;
}

Student::Student(int id, string name, int age, double height)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->height = height;
}

int Student::getID() const
{
    return id;
}
string Student::getName() const
{
    return name;
}
int Student::getAge() const
{
   return age;
}
double Student::getHeight() const
{
    return height;
}
void Student::setID(int id)
{
    this->id = id;
}
void Student::setName(string name)
{
    this->name = name;
}
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setHeight(double height)
{
    this->height = height;
}
#endif
