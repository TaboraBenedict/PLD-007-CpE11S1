#include <iostream>
using namespace std;

double DTP(double dollars, double conversionRate);
double PTD(double pesos, double conversionRate);

double DTP(double dollars,double conversionRate) 
{
    return dollars * conversionRate;
}

double PTD(double pesos, double conversionRate) 
{
    return pesos/conversionRate;
}

	int main() 
		{
    		double amount, conversionRate;
    			int choice;

    			cout<<"Enter the current conversion rate (1 Dollar to Pesos): ";
    				cin>>conversionRate;

    				cout<<"Choose the conversion option:\n";
    					cout<<"1. Dollars to Pesos\n";
    					cout<<"2. Pesos to Dollars\n";
    				cout<<"Enter your choice (1 or 2): ";
    			cin>>choice;

    		cout << "Enter the amount: ";
    	cin >> amount;

    			if (choice == 1)
				 {
        			cout<<amount<<" Dollars = "<<DTP(amount, conversionRate)<<" Pesos\n";
    		} 
	else if (choice == 2) 
	{
       				 cout<<amount<<" Pesos = "<<PTD(amount, conversionRate)<<" Dollars\n";
    } 
	else 
	{
        cout << "Invalid choice!";
    }

    return 0;
}

