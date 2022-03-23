#include <iostream>
#include "Student.h"
#include "DayType.h"
#include "ClockType.h"
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
    /*
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
    for(int i = 0; i < 7; i++)
    {
        cout << string(15, '=')<<i <<string(15, '=')  <<endl;
        dt.setCurrentDay(i);
        dt.printCurrentDay();
        dt.printNextDay();
        string previous = dt.getPreviousDay();
        cout << "Previous Day: " << previous <<endl;
        cout << "13 days in the future: "  << dt.getDaysInFuture(13)<<endl;
        cout << "13 days in the past: "  << dt.getDaysInPast(13)<<endl;
    }*/
    ClockType ct(23,59,59);
    cout << ct.getCurrentTime()<<endl;
    ct = ct + 30;
    ct.displayCurrentTime();
    ct.resetClock();
    ct.displayCurrentTime();
    ct.setTime(1,15,45);
    ct.displayCurrentTime();
    cout <<"Elapsed: " << ct.getElapsedTime()
    <<endl;

    cout << ct << endl;
    return 0;
}
