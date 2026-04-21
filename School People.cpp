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

class Teacher : public Person
{
public:
    string subject_name;
};

int main()
{
    Student s;
    Teacher t;

    getline(cin, s.name);
    cin >> s.roll_number;
    cin.ignore();
    getline(cin, t.name);
    getline(cin, t.subject_name);

    cout << "Student Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll_number << endl;
    cout << "Teacher Name: " << t.name << endl;
    cout << "Subject: " << t.subject_name << endl;

    return 0;
}
