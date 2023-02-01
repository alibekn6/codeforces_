#include <iostream>
using namespace std;

class Car {
public:
    string Name;
    string Engine;
    int Year;
    float Km;

    Car (string name, string engine, int year, float km) {
        Name = name;
        Engine = engine;
        Year = year;
        Km = km;
    }
};


// OOP in C++ amazing!!!

int main()
{
    int smth;
    int y = 10;

    // if (y < 10) {
    //     smth = 12;   
    // } else {
    //     smth = 40;
    // }

    smth = (y == 11) ? 30 : 40;

    cout << smth;

}