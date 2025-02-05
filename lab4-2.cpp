//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
    const double comm_rate = 0.1;
    double sales = 0.0;
    double commission = 0.0;

    cout << "Enter sales amount" << endl;
    cin >> sales;

    commission = sales * comm_rate;
    cout << "Commission: $" << commission << endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/
