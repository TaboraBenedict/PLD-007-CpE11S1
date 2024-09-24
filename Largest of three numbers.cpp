#include<iostream>
	using namespace std;
		int main()
			{
			//local variables
			int num1=0, num2=0, num3=0;
			
			//processs
			cout<<"This program was made by B.T and the use of this program is to read three numbers and display the largest number"<<endl;
				cout<<"Enter any number: "<<endl;
					cin>>num1;
			
			cout<<"Enter any number again: "<<endl;
				cin>>num2;
					cout<<"Enter the last number: "<<endl;
						cin>>num3;
				//outputs
					if (num1>=num2&&num1>=num3)
						cout<<"The largest number is: "<<num1<<endl;
							else if (num2>=num1&&num2>=num3)
								cout<<"The largest number is: "<<num2<<endl;
									else 
										cout<<"The largest number is: "<<num3<<endl;
		return 0;
	}