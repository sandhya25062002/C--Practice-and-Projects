/*Class for a Simple Calculator 
Write a C++ program that defines a class Calculator with functions for addition, 
subtraction, multiplication, and division. Create objects to use these functions. 
Objective: Introduce basic class structure.*/

#include<iostream>
using namespace std;
class calculator{
	public:
	      char op;
		  int number1 , number2;
		  
		  // function 
     	int add(int a , int b){
		
	  return a + b;
	}
     	int sub(int a , int b){
		
		return a-b;
	}
    	int multi(int a , int b){
		
		return a*b;
	}
    	int divide(int a , int b){
		   if (b==0){
		   	  cout<<"error ! devision by zero is not allowed !";
		   }
		return a/b;
	}
	
		void input()
		{
			cout<<"enter 1st number : ";
			cin>>number1;
			
			cout<<"enter operator (+ , - , * , /) : ";
			cin>>op;
			
			cout<<"enter  2nd number : ";
			cin>>number2;
			
		}
		void calc() {
			switch(op)
			{
				case '+': 
				         cout<<"sum is : "<<add(number1 , number2);
				         break;
				         
				case '-': 
				        cout<<"subtraction is : "<<sub(number1 , number2);
				        break;
				        
				case '*' : 
				         cout<<"multiplication is : "<<multi(number1, number2);
				         break;
				         
				case '/' : 
				        cout<<"division is  : "<<divide(number1, number2);
				        break;
				        
				default : cout<<" you entered invalid input !";
			          
			}
		}
		
		  
};
int main()
{
	calculator c1;
	c1.input();
	c1.calc();
   
	
	return 0;
}
