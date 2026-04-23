#include <iostream>
#include <string>
using namespace std;

class Visitor
{
private:
    int visitorId;
    string city;

public:
    void setVisitorId(int id)
    {
        visitorId = id;
    }

    int getVisitorId() const
    {
        return visitorId;
    }

    void setCity(const string& c)
    {
        city = c;
    }

    string getCity() const
    {
        return city;
    }
};

class PremiumVisitor : public Visitor
{
private:
    string visitorName;
    string passType;
    int ridesSelected;
    int guests;
    double totalSpending;
    string lockerRequired;

public:
    void inputDetails()
    {
        cout << "Enter visitor name: ";
        getline(cin, visitorName);

        int id;
        cout << "Enter visitor ID: ";
        cin >> id;
        setVisitorId(id);

        cin.ignore();
        string city;
        cout << "Enter city: ";
        getline(cin, city);
        setCity(city);

        cout << "Enter pass type: ";
        getline(cin, passType);

        cout << "Enter number of rides selected: ";
        cin >> ridesSelected;

        cout << "Enter number of guests: ";
        cin >> guests;

        cout << "Enter total spending: ";
        cin >> totalSpending;

        cin.ignore();
        cout << "Enter locker required (Yes/No): ";
        getline(cin, lockerRequired);
    }

    string getLoungeAccess() const
    {
        if (guests > 3)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }

    string getFoodCoupon() const
    {
        if (totalSpending >= 3000)
        {
            return "Eligible";
        }
        else
        {
            return "Not Eligible";
        }
    }

    string getVisitorCategory() const
    {
        if (passType == "Gold" || passType == "Platinum")
        {
            return "Premium Fast Track";
        }
        else
        {
            return "Standard Premium";
        }
    }

    void displaySummary() const
    {
        cout << "****************************************" << endl;
        cout << "         ADVENTURE PARK PREMIUM PASS" << endl;
        cout << "****************************************" << endl;
        cout << "Visitor Name         : " << visitorName << endl;
        cout << "Visitor ID           : " << getVisitorId() << endl;
        cout << "City                 : " << getCity() << endl;
        cout << "Pass Type            : " << passType << endl;
        cout << "Rides Selected       : " << ridesSelected << endl;
        cout << "Guests Count         : " << guests << endl;
        cout << "Total Spending       : " << totalSpending << endl;
        cout << "Locker Required      : " << lockerRequired << endl;
        cout << "Lounge Access        : " << getLoungeAccess() << endl;
        cout << "Food Coupon          : " << getFoodCoupon() << endl;
        cout << "Visitor Category     : " << getVisitorCategory() << endl;
        cout << "Reminder             : Please arrive 30 minutes early" << endl;
        cout << "****************************************" << endl;
    }
};

int main()
{
    PremiumVisitor v;
    v.inputDetails();

    cout << endl;
    v.displaySummary();

    return 0;
}
