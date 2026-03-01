/*Matrix Addition 
Write a C++ program to perform matrix addition on two 2x2 matrices. 
Objective: Practice multi-dimensional arrays.*/

#include<iostream>
using namespace std;
int main()
{
           int matrix1[2][2];
	       int matrix2[2][2];
	       int result[2][2];
	
	cout<<"enter eliments of matrix 1 : "<<endl;
	  for(int i = 0 ; i < 2 ; i++)
	  {
	  	 for(int j = 0; j < 2; j++){
	  	 	
	  	 	
	  	 		cout <<"matrix1["<<i<<"]["<<j<<"] = " ;
	           	cin >> matrix1[i][j];
		   }
	  	 
	  }
	      cout<<endl;
	      
	  cout<<"enter eliments of matrix 2 : "<<endl;
	  for(int i = 0 ; i < 2 ; i++)
	  {
	  	 for(int j = 0; j < 2; j++)
		   
		   {
		   	  cout <<"matrix2["<<i<<"]["<<j<<"] = ";
		   	  cin >> matrix2[i][j];
		   	  
		   }
	  	 	
	  }
	  
	     for(int i = 0; i < 2 ; i++)
	     {
	     	for(int j = 0 ; j < 2 ; j++)
	     	{
	     		result[i][j] = matrix1[i][j] + matrix2[i][j];
	     		
			 }
		 }
	  
	     cout<<endl;
	     
	     cout<<"result of matrix addition : ";cout<<endl;
	     
	     for(int i = 0; i < 2 ; i++)
	     {
	     	for(int j = 0 ; j < 2 ; j++)
	     	{
	     		cout << result[i][j] << " ";
			 }
			 
			 cout << endl;
		 }


	
}
