//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double comm_rate = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;

  cout << "Enter commission rate in decimal form" << endl;
  cin >> comm_rate;
  commission = sales * comm_rate;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
