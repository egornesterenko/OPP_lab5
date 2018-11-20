#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

template <class Type>
class Sort {
    vector<Type> arr;
    int n;
public:
    Sort():arr(0),n() {};
    Sort(const Sort &obj);
    Sort (const vector<Type>& a, int n);
    ~Sort();
    void show ();
    void sorte();
};