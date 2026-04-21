#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
};

class Student : public Person
{
public:
    int roll_number;
};

class GraduateStudent : public Student
{
public:
    string degree_name;

    void readData()
    {
        getline(cin, name);
        cin >> roll_number;
        cin.ignore();
        getline(cin, degree_name);
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Degree: " << degree_name << endl;
    }
};

int main()
{
    GraduateStudent g;
    g.readData();
    g.displayData();
    return 0;
}
