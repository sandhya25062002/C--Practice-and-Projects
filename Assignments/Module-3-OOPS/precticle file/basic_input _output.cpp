/*Write a C++ program that accepts user input for their name and age and then 
displays a personalized greeting. 
Objective: Practice input/output operations using cin and cout. */
#include<iostream>
using namespace std;
int main()
{
	char name;
	int age;
	
	cout<<"enter your name : " ;
	cin>>name;
	
	cout<<"enter your age : ";
	cin>>age;
	
	cout<<" name is :"<<name  << " age is : " <<age<<endl;
	
	
	return 0;
	
}
