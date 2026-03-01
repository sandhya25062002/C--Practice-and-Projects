/*Grade Calculator 
Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions. 
Objective: Practice conditional statements (if-else). */
#include<iostream>
using namespace std;
int main()
{
	int marks;
	
	cout<<"enter your marks (0-100) : ";
	cin>>marks;
	
	if(marks < 0 || marks > 100)
	{
		cout<<"invalid marks ! please enter marks between 0 to 100 .";
	}
	
	else if(marks >= 90){
		
		cout<<"grade 'a+'";
	}
	
	else if( marks >= 80 && marks < 90)
	{
		cout<<"grade 'a'";
	}
	
	else if(marks >= 65 && marks <80)
	{
		cout<<"grade 'b'";
	}
	
	else if(marks >= 40 && marks < 65)
	{
		cout<<"grade 'c'";
	}
	else{
		
		cout<<"fail !";
	}
	
	
	return 0;
}
