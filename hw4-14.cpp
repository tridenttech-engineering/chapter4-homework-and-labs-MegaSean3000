// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>
#include <iostream>

using namespace std;

int main()
{
double small = 0;
double medium = 0;
double large = 0;
double family = 0;
double total = 0;
double small_contr = 0.0;
double medium_contr = 0.0;
double large_contr = 0.0;
double family_contr = 0.0;


cout << "Enter the number of small pizzas sold:" << endl;
cin >> small;
cout << "Enter the number of medium pizzas sold:" << endl;
cin >> medium;
cout << "Enter the number of large pizzas sold" << endl;
cin >> large;
cout << "Enter the number of family pizzas sold" << endl;
cin >> family;

total = small + medium + large + family;
small_contr = (small / total) * 100;
medium_contr = (medium / total) * 100;
large_contr = (large / total) * 100;
family_contr = (family / total) * 100;

cout << "Total pizzas sold and contribution by each pizza:" << endl;
cout << "Total pizzas: " << total << endl;
cout << "Small pizza contribution: " << small_contr << "%" << endl;
cout << "Medium pizza contribution: " << medium_contr << "%" << endl;
cout << "Large pizza contribution: " << large_contr << "%" << endl;
cout << "Family pizza contribution: " << family_contr << "%" << endl;

     return 0;
}

