#include "time.cpp"
#include "date.cpp"
#include "header.h"
#include <string>
#include <vector>
#include <random>


template <class Type>
Sort<Type>::Sort(const vector<Type>& a, int n){
    this->n = n;
    arr = a;
}

template <class Type>
Sort<Type>::Sort(const Sort &obj){
    n = obj.n;
    arr = obj.arr;
}

template <class Type>
Sort<Type>::~Sort()  {
    arr.clear();
}

template <class Type>
void Sort<Type>::show()  {
    for (auto n:arr) {
        cout << n << endl;
    }
}

template <class Type>
void Sort<Type>::sorte() {
    sort(arr.begin(), arr.end());
}

template<>
class Sort<char*> {
    vector<string> arr;
    int n;
public:
    Sort(vector<char*> a, int n) {
        this->n = n;
        for (int i = 0; i<n; i++) {
            string st(a[i]);
            arr.push_back(st);
        }
    }
    ~Sort() {
        arr.clear();
    }
    void show() {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " " << endl;
    }
    void sorte() {
        sort(arr.begin(), arr.end());
    };
};

