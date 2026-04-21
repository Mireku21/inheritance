#include <iostream>
#include <string>
using namespace std;

class Marks
{
public:
    int marks_scored;
};

class Attendance
{
public:
    int attendance_percentage;
};

class StudentRecord : public Marks, public Attendance
{
public:
    string student_name;

    void readData()
    {
        getline(cin, student_name);
        cin >> marks_scored >> attendance_percentage;
    }

    void displayData()
    {
        cout << "Student Name: " << student_name << endl;
        cout << "Marks: " << marks_scored << endl;
        cout << "Attendance: " << attendance_percentage << endl;

        if (attendance_percentage >= 75)
            cout << "Eligible for Exam: Yes" << endl;
        else
            cout << "Eligible for Exam: No" << endl;
    }
};

int main()
{
    StudentRecord s;
    s.readData();
    s.displayData();
    return 0;
}
