#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int age;
    string gender;

public:
    void setAge(int a)
    {
        age = a;
    }

    int getAge() const
    {
        return age;
    }

    void setGender(const string& g)
    {
        gender = g;
    }

    string getGender() const
    {
        return gender;
    }
};

class Patient : public Person
{
private:
    string patientName;
    string disease;
    string doctorName;
    int roomNumber;
    int daysAdmitted;
    double billAmount;

public:
    void inputDetails()
    {
        cout << "Enter patient name: ";
        getline(cin, patientName);

        int age;
        cout << "Enter age: ";
        cin >> age;
        setAge(age);

        cin.ignore();
        string gender;
        cout << "Enter gender: ";
        getline(cin, gender);
        setGender(gender);

        cout << "Enter disease: ";
        getline(cin, disease);

        cout << "Enter doctor name: ";
        getline(cin, doctorName);

        cout << "Enter room number: ";
        cin >> roomNumber;

        cout << "Enter days admitted: ";
        cin >> daysAdmitted;

        cout << "Enter bill amount: ";
        cin >> billAmount;
    }

    string getAdmissionType() const
    {
        if (daysAdmitted > 7)
        {
            return "Long Stay";
        }
        else
        {
            return "Short Stay";
        }
    }

    string getBillStatus() const
    {
        if (billAmount >= 5000)
        {
            return "High Bill Case";
        }
        else
        {
            return "Regular Bill Case";
        }
    }

    string getAdvice() const
    {
        if (billAmount >= 5000)
        {
            return "Patient needs continuous monitoring";
        }
        else
        {
            return "Patient is under regular observation";
        }
    }

    void displayRecord() const
    {
        cout << "========================================" << endl;
        cout << "         SMART HOSPITAL RECORD" << endl;
        cout << "========================================" << endl;
        cout << "Patient Name      : " << patientName << endl;
        cout << "Age               : " << getAge() << endl;
        cout << "Gender            : " << getGender() << endl;
        cout << "Disease           : " << disease << endl;
        cout << "Doctor Assigned   : " << doctorName << endl;
        cout << "Room Number       : " << roomNumber << endl;
        cout << "Days Admitted     : " << daysAdmitted << endl;
        cout << "Bill Amount       : " << billAmount << endl;
        cout << "Admission Type    : " << getAdmissionType() << endl;
        cout << "Bill Status       : " << getBillStatus() << endl;
        cout << "Advice            : " << getAdvice() << endl;
        cout << "========================================" << endl;
    }
};

int main()
{
    Patient p;
    p.inputDetails();

    cout << endl;
    p.displayRecord();

    return 0;
}
