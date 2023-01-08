
#include <iostream>

using namespace std;

float taxCalculate(char type, float amount);

main()
{
    float amount;
    float tax;
    char type;
    float finalprice;
    string vehicle;

    cout << "Enter amount of vehicle... ";
    cin >> amount;
    cout << "Enter type of vehicle (M, E, S, V, T): ";
    cin >> type;

    tax = taxCalculate(type, amount);
    finalprice = tax + amount;
    
    if(type == 'M')
    {
        vehicle = "Motorcycle";
    }
    if(type == 'S')
    {
        vehicle = "Sedan";
    }
    if(type == 'V')
    {
        vehicle = "Van";
    }
    if(type == 'E')
    {
        vehicle = "Electric";
    }
    if(type == 'T')
    {
        vehicle = "Truck";
    }

    cout << "final price of vehicle is...." << vehicle << " after adding tax is.... " << finalprice;

}

float taxCalculate(char type, float price)
{
    float taxamount;
    if(type == 'M')
    {
        taxamount = price * 6.0 / 100;
        return taxamount;
    }
    if(type == 'E')
    {
        taxamount = price * 8.0 / 100;
        return taxamount;
    }
    if(type == 'S')
    {
        taxamount = price * 10.0 / 100;
        return taxamount;
    }
    if(type == 'V')
    {
        taxamount = price * 12.0 / 100;
        return taxamount;
    }
    if(type == 'T')
    {
        taxamount = price * 15.0 / 100;
        return taxamount;
    }
}
