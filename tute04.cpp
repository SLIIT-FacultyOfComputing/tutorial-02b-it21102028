/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include<iostream>

using namespace std;

long Factorial(int no);
long nCr(int n, int r);

int main ()
{
  
  int n;
  int r;
  
cout<<"Enter a value for n\t:";
cin>>n;
cout<<"Enter a value for r\t:";
cin>>r;
cout<<"nCr value\t:"<<Factorial(n)/nCr(n,r)<<endl;

exit(0);
}

long Factorial(int no)
{
  int row;
  int n=1;
  for(row=1;row<=no;row++)
  {
    n =  n * row;
  }
  return n;
}
long nCr(int n, int r)
{
  int row;
  int first = 1;
  int secound = 1;
  for(row=1;row<=r;row++)
  {
    first = first*row;
  }
  for(row=1;row<=(n-r);row++)
  {
    secound=secound*row;
  }
  return first*secound;
}
