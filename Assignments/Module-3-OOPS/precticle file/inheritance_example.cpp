/*Inheritance Example 
Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. 
Objective: Learn the concept of inheritance. */

#include<iostream>
using namespace std;
class person
{
	public:
	string name;
	
	
};

class student : public person 
{
	public :
	 
	int age;
	void getinfo()
	{
       cout << "Name: " << name << endl; 
	   cout<< "age is : "<<age<<endl;
	   
	   
	}
	
};

class teacher : public person{
	
	public :
	int emp_id;
	string subject;
	 
	  void getdetails()
     	
	  {
	  	cout << "Name: " << name << endl;
	  	cout<<"employee id is : "<<emp_id<<endl;
	  	cout<<"subject is :"<<subject<<endl;
	  }
	
};
int main()
{
	student s1;
	s1.name = "sandhya";
	s1.age = 22;
	
	cout << "  Student Details " << endl;
	
	s1.getinfo();
	
	teacher t1;
	
	t1.name = "dhruv patel";
	t1.emp_id = 456;
	t1.subject = "c++";
	
	cout<<endl;
	
	 cout<<" teacher details "<<endl;
	t1.getdetails();
	
	
	return 0;
}
