#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     float num1, num2;
     cout << "Enter 2 numbers: ";
     cin >> num1 >> num2;

     cout<<showpoint;
     cout<<fixed;
     cout<<setprecision(2);

     float sum=num1+num2;
     cout <<setw(25)<<"sum is: " << sum << "\n";

     float sub=num1-num2;
     cout <<setw(25)<<"Subtraction is: " << sub << "\n";

     cout<<noshowpoint;

     float mul=num1*num2;
     cout <<setw(25)<<"Multiplication is: " << mul << "\n";

     float div=(float) num1/num2;
     cout <<setw(25)<<"Division is: " << div << "\n";

     //int rem=num1%num2;
     //cout << "Reminder is: " << rem << "\n";


}

