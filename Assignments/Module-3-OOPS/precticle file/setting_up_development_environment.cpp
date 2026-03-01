/*Setting Up Development Environment 
Write a program that asks for two numbers and displays their sum. Ensure this is 
done after setting up the IDE (like Dev C++ or CodeBlocks). 
Objective: Help students understand how to install, configure, and run programs 
in an IDE.*/

#include<iostream>
using namespace std;
int main()
{
	int num1, num2, sum = 0;
	
	cout<<"enter first number : ";
	cin>>num1;
	
	cout<<"enter second number : ";
	cin>>num2;
	
	cout<<"the sum is" << " = "<<num1 + num2;
	
	return 0;
}
