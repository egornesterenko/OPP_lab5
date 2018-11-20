#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    Date(int day = 10, int month = 12, int year = 1999);
    void setDate(int y, int m, int d);
    bool isHigh();
    int getDay ();
    int getMonth ();
    int getYear ();
    void Show();
    friend ostream& operator<<(ostream& os, const Date& obj);
    friend bool operator < (const Date& obj1, const Date& obj2);
    friend bool operator > (const Date& obj1, const Date& obj2);
};