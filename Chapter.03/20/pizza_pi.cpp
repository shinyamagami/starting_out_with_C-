#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
// how to use srand() and rand()
int main()
{
  const double PI = 3.14159;
  const double AREA  = 14.125;

  double diameter;
  double radius;
  double number;

  cout << "What is the diameter of the pizza in inches?: ";
  cin >> diameter;
  number = PI * pow(diameter / 2, 2) / AREA;

  cout << setw(20) << left << "The number of slices:"
       << setw(10) << right << setprecision(2) << fixed << number << endl;
}
