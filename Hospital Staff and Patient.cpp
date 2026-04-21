#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class Doctor : public Person
{
public:
    string specialization;
};

class Patient : public Person
{
public:
    string disease_name;
};

int main()
{
    Doctor d;
    Patient p;

    getline(cin, d.person_name);
    cin >> d.age;
    cin.ignore();
    getline(cin, d.specialization);

    getline(cin, p.person_name);
    cin >> p.age;
    cin.ignore();
    getline(cin, p.disease_name);

    cout << "Doctor Name: " << d.person_name << endl;
    cout << "Age: " << d.age << endl;
    cout << "Specialization: " << d.specialization << endl;
    cout << "Patient Name: " << p.person_name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Disease: " << p.disease_name << endl;

    return 0;
}
