#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int hours;
    int min;
    int sec;
public:
    Time(int hours = 23, int min = 59, int sec = 59);
    void setTime(int h, int m, int s);
    int getHour ();
    int getMin ();
    int getSec ();
    void Show();
    friend ostream& operator<<(ostream& os, const Time& obj);
    friend bool operator < (const Time& obj1, const Time& obj2);
    friend bool operator > (const Time& obj1, const Time& obj2);
};
