#include<iostream>
	using namespace std;
		int main()
			{
				//chars
				char g;
				
					cout<<"Kindly input your gender"<<endl;
					cin>>g;
				
				switch (g)
					{

						case 'M':
						cout<<"Accepted!"<<endl;
						break;
						
						case 'F':
						cout<<"Accepted!"<<endl;
						break;
						
						case 'm':
						cout<<"Accepted!"<<endl;
						break;
						
						case 'f':
						cout<<"Accepted!"<<endl;
						break;

				default:
					{
					
					cout<<"What?? kindly re-run the program and try again"<<endl;
					break;
				}
			}
		return 0;
}
	
