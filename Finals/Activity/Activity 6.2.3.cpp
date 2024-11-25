#include<iostream>  
#include<iomanip>
using namespace std;

	double celsius(double fahrenheit) 
		{
   		 return (fahrenheit-32)* 5 / 9;
			}

		double fahrenheit(double celsius) {
    			return (celsius * 9 / 5) + 32;
		}

		int main()
		 {
    		cout<<"Celsius to Fahrenheit\n";
    			cout<<"----------------------\n";
    				cout<<"Celsius   Fahrenheit\n";
    					cout<<"----------------------\n";
    					for (int c=0;c<=100;c+=5) 
						{
      			  cout<<c<< "        " <<fixed<<setprecision(1)<<fahrenheit(c)<<endl;
    }

    cout<<endl;
    		cout<<"Fahrenheit to Celsius\n";
    			cout<<"----------------------\n";
    				cout<<"Fahrenheit   Celsius\n";
    			cout<<"----------------------\n";
    				for (int f=32;f<=212;f+=10) 
						{
        					cout<<f<< "        "<<fixed<<setprecision(1)<<celsius(f)<< endl;
    				}
    return 0;
}

