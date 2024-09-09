#include <iostream>
	using namespace std;
		
		int main()
			
		{
			//local variables
			int num1=0,num2=0,num3=0,sum=0;
			int num4=0,num5=0,num6=0,difference=0;
			int num7=0,num8=0,num9=0,product=0;
			int num10=0,num11=0,num12=0,quotient=0;
			int num13=0,num14=0,mod=0;
			
			cout<<"Input for sum number 1: ";
			cin>>num1;
			cout<<"Input for sum number 2: ";
			cin>>num2;
			cout<<"Input for sum number 3: ";
			cin>>num3;
			
			cout<<"Input for Subtraction number 1: ";
			cin>>num4;
			cout<<"Input for Subtraction number 2: ";
			cin>>num5;
			cout<<"Input for Subtraction number 3: ";
			cin>>num6;
			
			cout<<"Input for Multiplication number 1: ";
			cin>>num7;
			cout<<"Input for Multiplication number 2: ";
			cin>>num8;
			cout<<"Input for Multiplication number 3: ";
			cin>>num9;
			
			cout<<"Input for Division number 1: ";
			cin>>num10;
			cout<<"Input for Division number 2: ";
			cin>>num11;
			cout<<"Input for Division number 3: ";
			cin>>num12;
			
			cout<<"Input for Remainder number 1: ";
			cin>>num13;
			cout<<"Input for Remainder number 2: ";
			cin>>num14;
			
			sum = (num1+num2+num3);
				cout<<"The sum of three numbers is: "<<sum;
			
			difference = (num4-num5-num6);
				cout<<"The difference of three numbers is: "<<difference;
				
			product = (num7*num8*num9);
				cout<<"The Difference of three product numbers is: "<<product;
			
			quotient = (num10/num11/num12);
				cout<<"The difference of three quotient numbers is: "<<quotient;
			
			mod = (num13%num14);
				cout<<"The remainder of two numbers is: "<<mod;
	
		}
