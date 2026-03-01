/*String Palindrome Check 
Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards). 
Objective: Practice string operations. */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	char str[100];
	int len;
    bool ispelindrom = true;
	
	cout<<"enter a string : ";
	cin>>str;
	
	 len = strlen(str);
	 
	 for(int i = 0; i < len/2; i++)
	  {
        if(str[i] != str[len-1-i])
		 {
            ispelindrom = false;
              break;
         }
      }
	
	if(ispelindrom)
	 {
        cout << str << " is a palindrome." << endl;
     } else 
	{
        cout << str << " is not a palindrome." << endl;
    }
    
    return 0;
}

   

