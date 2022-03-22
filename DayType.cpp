#include "DayType.h"

string DayType::days[] = {"Sunday","Monday","Tuesday",
                          "Wednesday", "Thursday", "Friday",
                          "Saturday"};
DayType::DayType()
{
    currentDay = 0;
}

void DayType::setCurrentDay(int day)
{
    if(day >= 0 && day <=6) {
        this->currentDay = day;
    }
}
void DayType::printCurrentDay() const
{
    cout <<"Current Day: "<< days[currentDay] <<endl;
}
string DayType::getCurrentDay() const
{
    return days[currentDay];
}
void DayType::printNextDay() const
{
    cout <<"Next Day: "<< days[(currentDay+1)%7] <<endl;
}
string DayType::getNextDay() const
{
    return days[(currentDay+1)%7];
}
