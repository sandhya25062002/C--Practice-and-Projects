/*Factorial Calculation Using Recursion 
Write a C++ program that calculates the factorial of a number using recursion. 
Objective: Understand recursion in functions.*/

#include<iostream>
using namespace std;
int fect( int n);
int main()
{
	int n;
	
	cout<<"enter number : ";
	
	cin >> n;
	
	cout<<"fectorial is : "<< fect(n);
	
	
	return 0;
}
int fect( int n )
{
	
	if(n ==0 || n == 1)
	{
   	
   	  return 1;
    }
   
   return fect( n-1 ) * n ; 

}

   
