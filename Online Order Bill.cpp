#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    string product_name;
    double product_price;
};

class DiscountedProduct : public Product
{
public:
    double discount_percentage;

    void readData()
    {
        getline(cin, product_name);
        cin >> product_price >> discount_percentage;
    }

    void displayData()
    {
        double discount_amount = product_price * discount_percentage / 100.0;
        double final_price = product_price - discount_amount;

        cout << "Product Name: " << product_name << endl;
        cout << "Original Price: " << product_price << endl;
        cout << "Discount Percentage: " << discount_percentage << endl;
        cout << "Final Price: " << final_price << endl;
    }
};

int main()
{
    DiscountedProduct p;
    p.readData();
    p.displayData();
    return 0;
}
