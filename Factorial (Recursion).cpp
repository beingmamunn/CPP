#include<iostream>
#include<conio.h>
using namespace std;

int fact (int n)
{
     if(n==1)
          return 1;
     else return n*fact(n-1);
}

int main()
{
     int n, factorial;
     cout<<"Enter a Number: ";
     cin>>n;
     factorial= fact(n);
     cout<<"Factorial of "<<n<<" is: "<<factorial<<endl;

     getch();

}
