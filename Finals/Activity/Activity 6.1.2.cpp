#include <iostream>
using namespace std;

double FTC(double fahrenheit);
double CTF(double celsius);

int main() {
    double temperature;
    int choice;

    cout<<"Choose the conversion option:\n";
    cout<<"1. Fahrenheit to Celsius\n";
    cout<<"2. Celsius to Fahrenheit\n"<<endl;
    cout<<"Enter your choice (1 or 2): ";
    cin>>choice;
    
    cout<<"Enter the temperature value: ";
    cin>>temperature;

    if (choice == 1) 
	{
        cout<<temperature<<" Fahrenheit = "<<FTC(temperature)<<" Celsius\n";
    } else if (choice == 2) 
	{
        cout<<temperature<<" Celsius = "<<CTF(temperature)<<" Fahrenheit\n";
    } 
	else 
	{
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
}

double FTC(double fahrenheit) 
{
    return(fahrenheit - 32) * 5 / 9;
}

double CTF(double celsius) 
{
    return(celsius * 9 / 5)+32;
}

