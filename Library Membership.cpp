#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
};

class Member : public Person
{
public:
    int member_id;
};

class PremiumMember : public Member
{
public:
    int books_borrowed;

    void readData()
    {
        getline(cin, person_name);
        cin >> member_id >> books_borrowed;
    }

    void displayData()
    {
        cout << "Member Name: " << person_name << endl;
        cout << "Member ID: " << member_id << endl;
        cout << "Books Borrowed: " << books_borrowed << endl;

        if (books_borrowed <= 10)
            cout << "Status: Within Limit" << endl;
        else
            cout << "Status: Limit Exceeded" << endl;
    }
};

int main()
{
    PremiumMember p;
    p.readData();
    p.displayData();
    return 0;
}
