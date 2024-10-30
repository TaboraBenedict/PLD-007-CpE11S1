#include<iostream>
	using namespace std;
		int main()
			{
				string str[4];
					int sum=0;
					
					for (int i=0; i < 4;i++)
					{
					
					cout<<"Enter an integer: ";
					cin>>str[i];
					sum += stoi(str[i]);
			}
					cout<<"the answer is: "<<sum<<endl;
				return 0;
			}
