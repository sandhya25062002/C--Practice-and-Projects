/*POP vs. OOP Comparison Program 
Write two small programs: one using Procedural Programming (POP) to calculate the 
area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task. */

// for  pop
#include<iostream>
using namespace std;
int _rectangle(int l , int w);
int main()
    {
       int l ;
       int w;
      cout<<"enter size of lenghts : ";
      cin>>l;
	 
      cout<<"enter size of width : ";
      cin>>w;
  
      cout<<"rectangle size is " <<_rectangle(l,w);
      
      return 0;
     
	 }
int _rectangle(int l , int w)
{
	
	  return l * w;
 }


