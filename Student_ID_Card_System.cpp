#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    int getAge() const
    {
        return age;
    }
};

class Student : public Person
{
private:
    string name;

public:
    void input()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        int age;
        cout << "Enter age: ";
        cin >> age;
        setAge(age);
    }

    void display() const
    {
        cout << "------ Student ID Card ------" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Status: Active Student" << endl;
    }
};

int main()
{
    Student s;
    s.input();

    cout << endl;
    s.display();

    return 0;
}
