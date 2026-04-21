#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class AcademicInfo
{
public:
    string department_name;
};

class SportsInfo
{
public:
    string sport_name;
};

class Student : public Person, public AcademicInfo
{
public:
    int roll_number;
};

class GraduateStudent : public Student
{
public:
    string degree_name;
};

class StudentLeader : public GraduateStudent, public SportsInfo
{
public:
    string leadership_role;
};

class Teacher : public Person, public AcademicInfo
{
public:
    string subject_name;
};

int main()
{
    StudentLeader sl;
    Teacher t;

    getline(cin, sl.person_name);
    cin >> sl.age;
    cin.ignore();
    getline(cin, sl.department_name);
    cin >> sl.roll_number;
    cin.ignore();
    getline(cin, sl.degree_name);
    getline(cin, sl.sport_name);
    getline(cin, sl.leadership_role);

    getline(cin, t.person_name);
    cin >> t.age;
    cin.ignore();
    getline(cin, t.department_name);
    getline(cin, t.subject_name);

    cout << "----- Student Leader Details -----" << endl;
    cout << "Name: " << sl.person_name << endl;
    cout << "Age: " << sl.age << endl;
    cout << "Department: " << sl.department_name << endl;
    cout << "Roll Number: " << sl.roll_number << endl;
    cout << "Degree: " << sl.degree_name << endl;
    cout << "Sport: " << sl.sport_name << endl;
    cout << "Leadership Role: " << sl.leadership_role << endl;

    cout << endl;

    cout << "----- Teacher Details -----" << endl;
    cout << "Name: " << t.person_name << endl;
    cout << "Age: " << t.age << endl;
    cout << "Department: " << t.department_name << endl;
    cout << "Subject: " << t.subject_name << endl;

    return 0;
}
