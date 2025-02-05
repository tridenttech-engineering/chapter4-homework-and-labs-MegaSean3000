// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>

using namespace std;

int main()
{
double beginning_balance = 0.0;
double total_deposits = 0.0;
double total_withdrawals = 0.0;
double ending_balance = 0.0;

cout << "Enter the beginning balance of the account:" << endl;
cin >> beginning_balance;
cout << "Enter the total deposits:" << endl;
cin >> total_deposits;
cout << "Enter the total withdrawals" << endl;
cin >> total_withdrawals;

ending_balance = (beginning_balance + total_deposits) - total_withdrawals;

cout << "End of month balance: $" << ending_balance << endl;
    return 0;
}
