/*Class for Bank Account 
Create a class BankAccount with data members like balance and member functions 
like deposit and withdraw. Implement encapsulation by keeping the data members 
private. 
Objective: Understand encapsulation in classes.*/

#include<iostream>
using namespace std;
class bankaccount {
	
	private :
		      string username;
		      double balance;
		      int accno;
	public : 
		     bankaccount(string u, double b, int a)  // parameter construction
			 {
                   username = u;
                   balance = b;
                   accno = a;
        }

		  
		    void deposit(double amount)
		    {
               if(amount > 0) 
			   {
                     balance += amount;
                     cout << "deposited: " << amount << endl;
               } else
               
			    {
                cout << "deposit must be positive number!" << endl;
                
                }
          }
		   	void withdraw(double amount){
				if(amount <= 0) {
					
					cout<<"withdraw must be positive nummber ! "<<endl;
				}
				else if(amount > balance){
					
					cout<<"insufficiant balance in your acc !"<<endl;
				}
				else{
					
					 balance -= amount;
					 cout<<"withdrawn : "<<amount<<endl;
				}
				
			}
			 void display(){
			 	
			 	cout << "Account Holder: " << username << endl;
                cout << "Account No: " << accno << endl;
                cout << "Balance: " << balance << endl;
			 }
	    
};
int main()
{
	bankaccount acc1("sd1123" , 500000 , 1234);
	acc1.display();
	acc1.deposit(20000);
	acc1.withdraw(10000);
	

	return 0;
}
