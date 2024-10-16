#include<iostream>
	using namespace std;
		int main()
			{
				//Instructions
				//In this code session, you will learn on how to create a c++ calculator
				//Create a c++ program that applies MDAS Calculator
				
				//Local variables and chars
				float num1,num2;
				char a;
				
				//Settings
					cout<<"This calculator can only run MDAS"<<endl;
					cout<<"Operations available: +, -, *, and /"<<endl;
					
						cout<<"Kindly enter 2 numbers with spaces"<<endl;cin>>num1>>a>>num2;

				
				//Process and output	
					switch (a)
					{
							
						case '+':cout<<"The answer is: "<<(num1+num2)<<endl;break;
						
						case '-':cout<<"The answer is: "<<(num1-num2)<<endl;break;
						
						case '*':cout<<"The answer is: "<<(num1*num2)<<endl;break;
						
		   				case '/':cout<<"The answer is: "<<(num1/num2)<<endl;break;

						default:cout<<"Are you sure you have entered the correct number? retry again"<<endl;break;		
		    	}
	return 0;
}
