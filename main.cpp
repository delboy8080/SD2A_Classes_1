#include <iostream>
#include "Student.h"
#include "DayType.h"

void display_by_value(Student s)
{
    cout << string(30, '=') <<endl;
    cout << "ID: "<< s.getID() <<endl;
    cout << "Name: "<< s.getName() <<endl;
    cout << "Age: "<< s.getAge() <<endl;
    cout << "Height: "<< s.getHeight() <<endl;
    cout << string(30, '=') <<endl;
}

void display_by_reference(const Student &s)
{
    cout << string(30, '=') <<endl;
    cout << "ID: "<< s.getID() <<endl;
    cout << "Name: "<< s.getName() <<endl;
    cout << "Age: "<< s.getAge() <<endl;
    cout << "Height: "<< s.getHeight() <<endl;
    cout << string(30, '=') <<endl;
}

void display_by_pointer(const Student *s)
{
    cout << string(30, '=') <<endl;
    cout << "ID: "<< s->getID() <<endl;
    cout << "Name: "<< s->getName() <<endl;
    cout << "Age: "<< s->getAge() <<endl;
    cout << "Height: "<< s->getHeight() <<endl;
    cout << string(30, '=') <<endl;
}
int main() {
   Student s1;
   Student s2(2, "Jane Bloggs", 19, 1.6);
    display_by_value(s1);
    display_by_reference(s1);
    display_by_pointer(&s2);

    Student *pStud = new Student(3,"Tony Stark", 45, 1.54);
    display_by_pointer(pStud);
    cout << "Student Name: " << pStud->getName() <<endl;
    pStud->setHeight(1.68);
    display_by_pointer(pStud);

    delete pStud;
    pStud = nullptr;

    DayType dt;
    dt.printCurrentDay();
    dt.printNextDay();
    dt.setCurrentDay(6);
    dt.printCurrentDay();
    dt.printNextDay();
    return 0;
}
