/**Type Conversion 
Write a C++ program that performs both implicit and explicit type conversions and 
prints the results. 
Objective: Practice type casting in C++.*/
#include<iostream>
using  namespace std;
int main()
{  
   // implicit type conversions
	int a = 5;
	float b = 4.5;
	float result1 =  a  + b;
	
	cout<<"implicit conversion : 5 + 4.5 = "<<result1<<endl;  // a autometicaly convert in float value 
	
	// explicit type conversion 
	
	float c = 5.7;
	int result2 = (int)c;// manually float value convert in int value
	
	cout<<"explicit conversion : 5.7 = "<<result2<<endl;  // decimal value cut automettically
	
	return 0;
}
