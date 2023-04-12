#include <iostream>
#include <string>
using namespace std;

int main() {
	cout<<" **************************************AUSTIN MOBILE MONEY SERVICE**************************************"<<endl;
	const int defaultpin = 0000;
	int attempts = 0;
	char option, Y, N;
	int pin, c_pin, new_pin, select;
	float amount;
	float balance, counter, reference;
	string digits, MomoCode;
	string number, num2; 
	balance=1000;
	
	jump:
	cout<<"\nEnter Mobile Money Code: "<<endl;
	cin>>MomoCode;
	
	if(MomoCode=="*170#")
	{
	
			next:
		cout<<"\n Mobile Money Service Menu"<<endl;
		cout<<"\n1. Check Balance"<<endl;
		cout<<"2. Reset/Change Pin"<<endl;
		cout<<"3. Send Money "<<endl;
		cout<<"0. Exit \n"<<endl;
		cin>>select;
	}
	else
	{
		cout<<"\n Enter the correct code"<<endl;
		goto jump;
	}

if(select==1)
{
	cout<<"\n1. Main Account"<<endl;
	cout<<"0. Back"<<endl;
	cin>>select;
		
	if(select==1)
	{
		
		do
		{			
    		attempts++;
    		cout << "\nPlease enter your 4-digit PIN: " << endl;
    		cin >> pin;

    		if (pin != defaultpin)
    		{
        		cout << "\nIncorrect PIN. " << endl;
    		}
    		
			else if (pin == defaultpin)
    		{
        		cout << "\nYour balance is GHc" << balance << endl;
        		goto next;
    		}
		} 
			while (attempts < 3);

			if (attempts >= 3)
			{
    			cout << "\nMaximum attempts reached.";
    			cout << "Exiting Program...." << endl;
    			goto transfer;
			}

		switch (pin)
		{
    	// case statements here
    		break;
		}
	}
	
	else if(select==0)
	{
		goto next;
	}
}

else if(select==2)
{
	cout<<"\n Are You Sure You Want To Change Your Pin  "<<endl;
	cout<<"\nChoose Y/N "<<endl;
	cin>>option;
	if(option=='Y' || option=='y'){
		cout<<"\nEnter New Pin" <<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<"\n Your New Pin Is "<<new_pin;
		goto next;
	}
		
		
	else if (option=='N' || option=='n')
	{
		cout<<"\n MOMO Pin was not resetted";
		cout<<"\n Thank you"<<endl;
		goto next;
	}
	
}

else if(select==3)
{
	cout<<"\n1. MTN Network"<<endl;
	cout<<"2. Other Networks"<<endl;
	cout<<"0. Back \n"<<endl;
	cin>>select;
	
		if(select==1)
		{
			here:
    		cout << "\nEnter MOMO Number: "<<endl;
    		cin >> number;

    			if (number.length() != 10) 
				{
        			cout << "\n Invalid number. Please enter a 10-digit number." << endl;
        			goto here;
    			}

    			string prefix = number.substr(0, 3);
    			if (prefix != "024" && prefix != "055" && prefix != "059" && prefix != "025") 
				{
        			cout << "\n Invalid number. Please enter MTN Number." << endl;
        			goto here;
    			}

		
			cout<<"\nEnter the MOMO Number again"<<endl;
			cin>>num2;
				if(number !=num2)
				{
					cout<<"\n Wrong number entered";
					goto here;
				}
				
				
			cout<<"\nEnter Amount To Transfer "<<endl;
			cin>>amount;
			
			cout<<"Transfer GHc"<<amount<<" to "<<number<<endl;
			
			cout<<"\nEnter Reference "<<endl;
			cin>>reference;
			
					if(balance < amount)
					{
						cout<<"\n Your balance is insufficient"<<endl;
						cout<<" Thank you"<<endl;
						goto next;	
					}
			
					
					
			do
			{
				attempts++;
    			cout << "\nPlease enter your 4-digit PIN: " << endl;
    			cin >> pin;

    				if (pin != defaultpin)
					{
						cout<<"\n Incorrect PIN. " <<endl;
						
					}
		
					else if (pin== defaultpin)
					{
						cout<<"You have successfully sent "<<amount<<" to "<<number<<endl;
						cout<<"Your current balance is GHc "<<balance-amount<<endl;	
						goto next;	
					}
		
			} 
			
				while (attempts < 3);

					if (attempts >= 3)
					{
    					cout << "\nMaximum attempts reached.";
    					cout << "Exiting Program...." << endl;
    					goto transfer;
					}
				
				switch(pin)
				{
					break;
				}
		}
		
		else if(select==2)
		{
				Hi:
			cout<<"\nEnter Number: "<<endl;
			cin>>number;
							
			cout<<"\nEnter the Number again"<<endl;
			cin>>num2;
			
				if(number !=num2)
				{
					cout<<"\n Wrong number";
					goto Hi;
				}
				
				
				cout<<"\nEnter Amount To Transfer "<<endl;
				cin>>amount;
			
				cout<<"Transfer GHc"<<amount<<" to "<<number<<endl;
			
				cout<<"\nEnter Reference "<<endl;
				cin>>reference;
					
					if(balance < amount)
					{
						cout<<"\n Your balance is insufficient"<<endl;	
						cout<<" OK "<<endl;
						goto next;
					}
					
								
		do
		{			
    		attempts++;
    		cout << "\nPlease enter your 4-digit PIN: " << endl;
    		cin >> pin;

    		if (pin != defaultpin)
    		{
        		cout << "\nIncorrect PIN. " << endl;
    		}
    		
			else if (pin == defaultpin)
    		{
    			cout<<"You have successfully sent "<<amount<<" to "<<number<<endl;
				cout<<"Your current balance is GHc "<<balance-amount<<endl;	
        		goto next;
    		}
		} 
			while (attempts < 3);

			if (attempts >= 3)
			{
    			cout << "\nMaximum attempts reached.";
    			cout << "Exiting Program...." << endl;
    			goto transfer;
			}

		switch (pin)
		{
    	// case statements here
    		break;
		}
		}
		
		else if(select==0)
		{
			goto next;
		}
		
		
}

else if (select==0)
{
	goto transfer;
}	
		
			transfer:
			

	cout<<"\n\n **************************************AUSTIN MOBILE MONEY SERVICE**************************************"<<endl;
	return 0;
}
