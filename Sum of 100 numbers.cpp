#include<iostream>
	using namespace std;
		int main()
			{
				//local variables
				//Write an algorithm to read 100 numbers and then display the sum. 
				float num;
				int sum=0;
				
				
					//process
					for (int i=0;i<100;i++)
					{
						cout<<"Enter a number: "<<i+1<<endl;
						cin>>num;
						sum+=num;
					}
				//output of the code
				cout<<"The sum of 100 numbers is: "<<sum<<endl;
				return 0;
			}