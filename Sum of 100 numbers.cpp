#include<iostream>
	using namespace std;
		int main()
			{
				float num;
				int sum=0;
				
					for (int i=0;i<100;i++)
					{
						cout<<"Enter a number: "<<i+1<<endl;
						cin>>num;
						sum+=num;
					}
				cout<<"The sum of 100 numbers is: "<<sum<<endl;
				return 0;
			}