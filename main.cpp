#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

int num_days;
float cur_day_cents = 0.01;
float total = 0;

cout << "Enter number of days: ";
cin >> num_days;

if (num_days >= 1 && num_days <= 30)
  for (int d= 0; d < num_days; d++)
{
  total += cur_day_cents; 
  cur_day_cents *= 2;
  

 cout << "total: " << total << endl;
}
return 0;

}