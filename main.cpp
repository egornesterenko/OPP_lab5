#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include "header.cpp"
using namespace std;

/*

 Создать шаблон класса, в котором содержится массив объектов заданного типа, помимо базовых типов, в шаблоне необходимо предусмотреть использование пользовательских типов заданных в таблице 3.2. Для пользовательских типов перегрузить все необходимые для манипуляций операции.
Разработать для данного класса алгоритмы сортировки согласно варианту (таблица 3.2).
Продемонстрировать все действия с объектом данного класса, на нескольких базовых и всех пользовательских типах данных (обязательно тип char *). //
Корректная сортировка для типа int значений 5, 10, 9, 101, будет иметь вид: 5, 9, 10, 101.

 типы Date, Time - Selection sort
 */

random_device rd;
mt19937 gen(rd());

template < typename T >
T random(vector<T> &a) {
    uniform_real_distribution<T> dist(0, 100);
    for (int i = 0; i < 10; i++) {
        a[i] = dist(rd);
    }
}

template < class Type >
Type k(vector<Type> a){
    if (typeid(Type) == typeid(double) || typeid(Type) == typeid(float)) random(a);
    else if (typeid(Type) == typeid(int)) {
        uniform_int_distribution<int> dist(0, 100);
        for (int i = 0; i < 10; i++) {
            a[i] = dist(rd);
        }
    }
    else if(typeid(Type) == typeid(char)) {
        uniform_int_distribution<int> dist(97, 122);
        for(int i = 0; i<10; i++) {
            a[i] = (char)dist(rd);
        }
    }
    Sort<Type> p(a, a.size());
    p.show();
    cout << "--------" << endl;
    p.sorte();
    p.show();
    a.clear();
}

int main() {

    //Cортировка для типа DOUBLE
//    vector<double> a(10);
//    k(a);

    //Cортировка для типа FLOAT
//    vector<float> a(10);
//    k(a);

    //Cортировка для типа INT
//    vector<int> a(10);
//    k(a);

    //Cортировка для типа CHAR
//    vector<char> a(10);
//    k(a);


    //Cортировка для типа STRING
//    vector<string> a;
//    a.emplace_back("John");
//    a.emplace_back("Alice");
//    a.emplace_back("Anne");
//    a.emplace_back("Zandy");
//    a.emplace_back("Betty");
//    a.emplace_back("John");
//    a.emplace_back("Kitty");
//
//    Sort<string> p(a, a.size());

    //Cортировка для типа DATE
    vector<Date> a;
    a.emplace_back(Date(16, 9, 2000));
    a.emplace_back(Date());
    a.emplace_back(Date(21,6,1830));
    a.emplace_back(Date(30,6,1940));
    a.emplace_back(Date(10,7,1995));

    Sort<Date> p(a, a.size());


    //Cортировка для типа TIME
//    vector<Time> a;
//
//    a.push_back(Time(16, 39, 59));
//    a.push_back(Time());
//    a.push_back(Time(16,39,9));
//    a.push_back(Time(22,26,19));
//    a.push_back(Time(10,7,5));
//
//    Sort<Time> p(a, a.size());


    p.show();
    cout << "--------" << endl;
    p.sorte();
    p.show();

    a.clear();

}