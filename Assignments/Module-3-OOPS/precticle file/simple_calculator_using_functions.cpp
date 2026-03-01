/*Simple Calculator Using Functions
Write a C++ program that defines functions for basic arithmetic operations (add, 
subtract, multiply, divide). The main function should call these based on user input. 
Objective: Practice defining and using functions in C++.*/

#include<iostream>
using namespace std;
int add(int a , int b);
int sub(int a, int b);
int multi(int a , int b);
int divide (int a , int b);

int main()
{
	int num1 , num2; 
	char op;
	
	cout<<"enter 1st number : ";
	cin>>num1;
	
	cout<<"enter operator (+ ,- , * , /) : ";
	cin>>op;
	
	cout<<"enter 2nd  number : ";
	cin>>num2;
	
	switch(op){
		
		case '+' : cout<<" sum is : "<< num1 << " + "<< num2 <<" = " <<add(num1, num2)<<endl;
		           break;
		
		case '-' : cout<< "subtraction is : "<< num1 << " - "<<num2 << " = "<<sub(num1 , num2 )<<endl;
		           break;
		           
		case '*' : cout<<"multiplication is : "<< num1 << " * " << num2 << " = "<<multi(num1 ,num2)<<endl;
		           break;
		           
		case '/' :  cout<<"division is : "<< num1 << " / "<<num2 << " = "<<divide(num1 , num2)<<endl;
		            break;
		            
	    default  :  cout<<"invalid operator !";
	    
	} 
	
	return 0;
}
int add(int a , int b)
{
	return a + b;
	
}
int sub(int a , int b)
{
	return a - b;
}
int multi(int a , int b)
{
	return a * b;
}
int divide(int a , int b)
{
	return a / b;
}
