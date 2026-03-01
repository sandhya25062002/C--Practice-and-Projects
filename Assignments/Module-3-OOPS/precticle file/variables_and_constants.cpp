/*Variables and Constants 
Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
Objective: Understand the difference between variables and constants.*/

#include<iostream>
using namespace std;
int main()
{
	int age = 22;
	float height = 5.2;
	char grade = 'a';
	
	const float pi = 3.14; //  constatnt value cant change
	
	cout<<"age is : "<<age<<endl;
	cout<<"height is : "<<height<<endl;
	cout<<"grade is : "<<grade<<endl;
	cout<<"pi is : "<<pi<<endl;
	
	age +=5;
    height *= 2;
    grade = 'b';
    
    cout<<endl;
    
    
    cout<<"after perform operation "<<endl;
    
    cout<<endl;

    cout<<"age is : "<<age<<endl;
    cout<<"height is : "<<height<<endl;
    cout<<"grade is : "<<grade<<endl;
    cout<<"pi  is : "<<pi<<endl;
	return 0;
	
	
}
