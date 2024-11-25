#include <iostream>
#include<cmath>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
    int num1, num2;

    cout<<"Enter first integer: ";
    	cin>>num1;
    		cout<<"Enter second integer: ";
    			cin>>num2;

    cout << "Addition: " << add(num1, num2) << endl;
    		cout << "Subtraction: " << subtract(num1, num2) << endl;
    			cout << "Multiplication: " << multiply(num1, num2) << endl;

    if (num2 != 0) 
	{
        cout <<"Division: "<< divide(num1, num2)<<endl;
    } 
	else 
	{
        cout<<"Error: Cannot divide by zero!"<<endl;
    }

    return 0;
}

		int add(int a, int b) 
		{
   			 return a + b;
		}

		int subtract(int a, int b) 
		{
   			 return a - b;
			}

			int multiply(int a, int b) 
			{
  			  return a * b;
			}

			double divide(int a, int b) 
		{
    		return static_cast<double>(a) / b;
}
