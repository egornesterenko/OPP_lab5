#include "time.h"

Time::Time(int hours, int min, int sec){
    if (hours > -1 && hours < 24 && min > -1 && min < 60 && sec > -1 && sec < 60) {
        this->hours = hours;
        this->min = min;
        this->sec = sec;
    }
}
void Time::setTime(int h, int m, int s)  {
    hours = (h >= 0) && (h < 24)? h : 0;
    min = (h >= 0) && (m < 60)? m : 0;
    sec = (s >= 0) && (s < 60)? s : 0;
}
int Time::getHour() {
    return hours;
}
int Time::getMin() {
    return min;
}
int Time::getSec() {
    return sec;
}

ostream& operator << (ostream& os, const Time& obj)
{
    os << setfill('0') <<  setw(2) << obj.hours << ":" << setw(2) << obj.min << ":" << setw(2) << obj.sec;
    return os;
}
bool operator < (const Time& obj1, const Time& obj2) {
    return obj1.hours*3600 + obj1.min*60 + obj1.sec < obj2.hours*3600 + obj2.min*60 + obj2.sec ;
}
bool operator > (const Time& obj1, const Time& obj2) {
    return obj1.hours*3600 + obj1.min*60 + obj1.sec > obj2.hours*3600 + obj2.min*60 + obj2.sec ;
}