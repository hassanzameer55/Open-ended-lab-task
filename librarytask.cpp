#include<iostream>
using namespace std;
int main(){
	int choice = 0,issue_date ,return_date;
	cout << "1 - Do you want to borrow book ? \n";
	cout << "2 - Do you want to return book ? \n";
	cout << "Select option 1 or 2 \n";
	cin >> choice;
	if(choice==1)
	{
		string book_name; 
		cout << "Enter book name : \n";
		cin >> book_name;
		cout << "Book issued for 14 days Thank you !";
	}
	else if(choice==2)
	{ 		
		cout << "Enter issue date :";
		cin >> issue_date;
		cout << "Enter return date ";
		cin >> return_date;
		if((return_date - issue_date) > 14)
		{
			cout << "You are late " << return_date - issue_date << "$";
		}
	}
	else
	{
		cout << "Invalid number ";
	}
	
	
}
