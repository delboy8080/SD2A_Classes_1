//
// Created by floodd on 22/03/2022.
//

#ifndef SD2A_CLASSES_1_CLOCKTYPE_H
#define SD2A_CLASSES_1_CLOCKTYPE_H
#include <iostream>
using namespace std;
class ClockType
{
    int hrs;
    int mins;
    int sec;
public:
    ClockType();
    ClockType(int hh, int mm, int ss);

    void increaseBySeconds(int x);
    void increaseByMinutes(int x);
    void increaseByHours(int x);
    string getCurrentTime()const ;
    void displayCurrentTime() const;
    void resetClock();
    void setTime(int hh, int mm, int ss);
    int getElapsedTime();

};
#endif //SD2A_CLASSES_1_CLOCKTYPE_H
