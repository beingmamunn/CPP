#include<iostream>
using namespace std;
int main()
{
     int num1, num2;
     cout << "Enter 2 numbers: ";
     cin >> num1 >> num2;

     int sum=num1+num2;
     cout << "sum is: " << sum << "\n";

     int sub=num1-num2;
     cout << "Subtraction is: " << sub << "\n";

     int mul=num1*num2;
     cout << "Multiplication is: " << mul << "\n";

     double div=(float) num1/num2;
     cout << "Division is: " << div << "\n";

     int rem=num1%num2;
     cout << "Reminder is: " << rem << "\n";


}
