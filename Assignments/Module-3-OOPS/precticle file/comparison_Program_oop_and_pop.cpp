/*Write two small programs: one using Procedural Programming (POP) to calculate the 
area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task. 
Objective: Highlight the difference between POP and OOP approaches. */

   // oops Programming
   
#include<iostream>
using namespace std;
class rectangle {
	public : 
	            int l;
	             int w;
	             
	       void input()
		   {
	       	
	       	
	       	cout<<"enter size  of  lenghth : ";
	       	cin>> l;
	       	
	       	cout<<"enter size of  width: ";
	       	cin>> w;
	       	
		   }
		   
		   int rect()
		   {
		   	
		       return l * w;
		   }
	       
};

int main()
{

	
	rectangle r1;
	
	r1.input();
	
	cout<<"rectangle size is : "<<r1.rect();
	
}
      
