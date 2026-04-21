#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string employee_name;
    double salary;
};

class Manager : public Employee
{
public:
    double bonus;

    void readData()
    {
        getline(cin, employee_name);
        cin >> salary >> bonus;
    }

    void displayData()
    {
        cout << "Manager Name: " << employee_name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Income: " << salary + bonus << endl;
    }
};

int main()
{
    Manager m;
    m.readData();
    m.displayData();
    return 0;
}
