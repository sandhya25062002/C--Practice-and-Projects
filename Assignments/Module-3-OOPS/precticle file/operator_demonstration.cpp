/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
operators. Perform operations using each type of operator and display the results. 
Objective: Reinforce understanding of different types of operators in C++.*/
#include<iostream>
using namespace std;
int main()
{
	int  a = 10;
	int  b = 6;
	
	// arithmatic operator 
	
	cout<<"arithmatic operator "<<endl;
	
	cout<<"---------"<<endl;
	
	cout<<"a + b = "<<a+b<<endl;
	cout<<"a - b = "<<a-b<<endl;
	cout<<"a * b = "<<a*b<<endl;
	cout<<"a / b = "<<a/b<<endl;
	cout<<"a % b = "<<a%b<<endl;
	
	cout<<endl;
	
	cout<<"reletional operator "<<endl;
	cout<<"----------"<<endl;
	
	// reletionl operetor
	cout<<"a < b = " << (a<b) <<endl;
	cout<<"a > b = " << (a>b) <<endl;
	cout<<"a == b = "<< (a == b) <<endl;
	cout<<"a != b = " << (a != b) <<endl;
	cout<<"a <= b = " << (a <= b) <<endl;
	cout<<"a >= b = "<<(a >= b)<<endl;
	
	cout<<endl;
	
	cout<<"logical operator "<<endl;
	cout<<"-----------"<<endl;
	
	cout<<"a && b = "<<(a && b) <<endl;
	cout<<"a || b = "<<(a || b) <<endl;
	
	cout<<endl;
	
	cout<<"bitwise operator "<<endl;
	cout<<"---------"<<endl;
	
	cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

	
	
	
	
	
	
	
	return 0;
}
