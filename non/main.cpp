#include <iostream>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void intro() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company : " << Company << endl;
    }


};

int main()
{
    Employee emp1 = Employee("Alibek", "LeetCode", 21);
    emp1.intro();

//     int number;
//     Employee employee1;
//     employee1.Name = "ALibeK";
//     employee1.Company = "Google-Leetcode";
//     employee1.age = 27;
//     employee1.intro();

//     Employee employee2;
//     employee1.Name = "Jony";
//     employee2.age = 32;
//     employee2.Company = "OlpqQ";

    // employee2.intro();

}