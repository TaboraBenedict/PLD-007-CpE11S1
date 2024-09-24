#include<iostream>
	using namespace std;
		int main()
			{
			//local variables
			int num1=0, num2=0;
			
			//processs
			cout<<"This program was made by B.T and the use of this program is to read two numbers and display the smallest number"<<endl;
				cout<<"Enter any number: "<<endl;
					cin>>num1;
			
			cout<<"Enter any number again: "<<endl;
				cin>>num2;
				//outputs
					if (num1<num2)
						cout<<"The smallest number is: "<<num1<<endl;
			 				else if (num1>num2)
								cout<<"The smallest number is: "<<num2<<endl;
		return 0;
	}