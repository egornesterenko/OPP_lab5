#include "date.h"

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}
void Date::setDate(int y, int m, int d)  {
    year = (y >= 0)? y : 0;
    month = (m >= 1) && (m < 13)? m : 0;
    day = (d >= 1) && (d < 32)? d : 0;
}
int Date::getDay()  {
    return day;
}
int Date::getMonth()  {
    return month;
}
int Date::getYear()  {
    return year;
}
ostream& operator << (ostream& os, const Date& obj)
{
    os << setfill('0') <<  setw(2) << obj.day << "." << setw(2) << obj.month << "." << setw(2) << obj.year;
    return os;
}
bool operator < (const Date& obj1, const Date& obj2) {
    return obj1.year*365 + obj1.month*12 + obj1.day < obj2.year*365 + obj2.month*12 + obj2.day;
}
bool operator > (const Date& obj1, const Date& obj2) {
    return obj1.year*365 + obj1.month*12 + obj1.day > obj2.year*365 + obj2.month*12 + obj2.day;
}