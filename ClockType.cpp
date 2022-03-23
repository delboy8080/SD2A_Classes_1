//
// Created by floodd on 22/03/2022.
//
#include "ClockType.h"

ClockType::ClockType()
{
    hrs = mins = sec = 0;
}
ClockType::ClockType(int hh, int mm, int ss)
{
    this->hrs = hh;
    this->mins = mm;
    this->sec = ss;
}

void ClockType::increaseBySeconds(int x)
{
    this->sec +=x;
    if(this->sec >=60)
    {
        this->increaseByMinutes(this->sec/60);
        sec = sec%60;
    }
}
void ClockType::increaseByMinutes(int x)
{
    mins += x;
    if(mins >= 60)
    {
        this->increaseByHours(mins/60);
        mins %=60;
    }
}
void ClockType::increaseByHours(int x)
{
    hrs = (hrs+x)%24;
}
string ClockType::getCurrentTime()const
{
    return to_string(hrs)+":"+to_string(mins)
    +":"+to_string(sec);
}
void ClockType::displayCurrentTime() const
{
    cout << this->getCurrentTime()<<endl;
}
void ClockType::resetClock()
{
    hrs = mins=sec=0;
}
void ClockType::setTime(int hh, int mm, int ss)
{
    this->hrs = hh;
    this->mins = mm;
    this->sec = ss;
}

int ClockType::getElapsedTime() const
{
    return (hrs*3600)+(mins*60)+sec;
}

int ClockType::getRemaingTime() const
{
    return (24*3600)-getElapsedTime();
}

string ClockType::difference(const ClockType &c)
{
    int diff = abs(getElapsedTime() - c.getElapsedTime());
    int hr = diff/3600;
    int min = (diff%3600)/60;
    int sec = diff % 60;
    string str = to_string(hr)+":"+to_string(min)
            +":"+to_string(sec);
    return str;

}
ClockType ClockType::operator+(int x)
{
    ClockType t(*this);
    t.increaseBySeconds(x);
    return t;
}
ostream& operator<<(ostream& in, ClockType &c)
{
    in << c.getCurrentTime() <<endl;
    return in;
}