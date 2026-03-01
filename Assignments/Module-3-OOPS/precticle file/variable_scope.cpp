 /*Variable Scope 
Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope. 
Objective: Reinforce the concept of variable scope.*/

#include <iostream>
using namespace std;

int globalVar = 10;  // Global variable

void myFunction() {
    int localVar = 20;  // Local variable
    cout << "Inside myFunction:" << endl;
    cout << "Local Variable = " << localVar << endl;
    cout << "Global Variable = " << globalVar << endl;
}

int main() {
	
       
       cout << "Global Variable = " << globalVar << endl;
      //cout << localVar = <<localvar;  // Error ( because localVar function not scope in main )

     myFunction();  // function call

    return 0;
}

