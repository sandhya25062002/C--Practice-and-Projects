/*Array Sum and Average 
Write a C++ program that accepts an array of integers, calculates the sum and 
average, and displays the results. 
Objective: Understand basic array manipulation.*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	float average;
	
	cout<<" enter number of index : ";
	cin >> n;
	
	
	cout<<endl;
	
	int arr[n];
	

    for(int i = 0; i < n ; i++)
    {
    	cout<<" index " << i << " = ";
    	cin >> arr[i]; 
	
	}
	
	cout<<endl;
	
	for(int i = 0; i < n; i++)
	
	{
        cout << " Index " << i << " = " << arr[i] << endl;
        
        sum += arr[i];
    }
          	average = (float)sum / n;
          	
	        cout <<" sum  : " <<sum<<endl;
        	cout <<" average :"<<average<<endl;
	
	return 0;
	
}
