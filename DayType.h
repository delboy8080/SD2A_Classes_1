//
// Created by floodd on 16/03/2022.
//

#ifndef SD2A_CLASSES_1_DAYTYPE_H
#define SD2A_CLASSES_1_DAYTYPE_H
#include <iostream>

using namespace std;

class DayType {
    static string days[];
    int currentDay;
public:
    DayType();
    void setCurrentDay(int day);
    void printCurrentDay() const;
    string getCurrentDay() const;
    void printNextDay() const;
    string getNextDay() const;
    string getPreviousDay() const;
    string getDaysInFuture(int x) const;
    string getDaysInPast(int x) const;
};


#endif //SD2A_CLASSES_1_DAYTYPE_H
