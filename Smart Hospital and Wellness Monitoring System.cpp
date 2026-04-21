#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class MedicalInfo
{
public:
    string disease_name;
};

class FitnessInfo
{
public:
    int daily_step_count;
};

class Patient : public Person
{
public:
    string patient_id;
};

class InPatient : public Patient
{
public:
    int room_number;
};

class WellnessPatient : public InPatient, public FitnessInfo
{
public:
    string diet_plan;
};

class Doctor : public Person
{
public:
    string specialization;
};

class VisitingDoctor : public Doctor
{
public:
    string visiting_hours;
};

class HealthAdvisor : public VisitingDoctor, public MedicalInfo
{
public:
    string advice_note;
};

int main()
{
    WellnessPatient wp;
    HealthAdvisor ha;

    getline(cin, wp.person_name);
    cin >> wp.age;
    cin.ignore();
    getline(cin, wp.patient_id);
    cin >> wp.room_number;
    cin >> wp.daily_step_count;
    cin.ignore();
    getline(cin, wp.diet_plan);

    getline(cin, ha.person_name);
    cin >> ha.age;
    cin.ignore();
    getline(cin, ha.specialization);
    getline(cin, ha.visiting_hours);
    getline(cin, ha.disease_name);
    getline(cin, ha.advice_note);

    cout << "----- Wellness Patient Details -----" << endl;
    cout << "Name: " << wp.person_name << endl;
    cout << "Age: " << wp.age << endl;
    cout << "Patient ID: " << wp.patient_id << endl;
    cout << "Room Number: " << wp.room_number << endl;
    cout << "Daily Step Count: " << wp.daily_step_count << endl;
    cout << "Diet Plan: " << wp.diet_plan << endl;
    if (wp.daily_step_count >= 7000)
        cout << "Activity Status: Active" << endl;
    else
        cout << "Activity Status: Needs Improvement" << endl;

    cout << endl;

    cout << "----- Health Advisor Details -----" << endl;
    cout << "Name: " << ha.person_name << endl;
    cout << "Age: " << ha.age << endl;
    cout << "Specialization: " << ha.specialization << endl;
    cout << "Visiting Hours: " << ha.visiting_hours << endl;
    cout << "Disease Focus: " << ha.disease_name << endl;
    cout << "Advice Note: " << ha.advice_note << endl;

    return 0;
}
