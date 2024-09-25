#include<iostream>
	using namespace std;
		int main()
			{
				//chars
				char g;
				char a;
				
					cout<<"Kindly input your gender"<<endl;
					cin>>g;
										
					cout<<"Kindly input your age"<<endl;
					cin>>a;
				
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

				switch (a)
					{
						case '1':
						cout<<"Accepted!"<<endl;
						break;
						
						case '2':
						cout<<"Accepted!"<<endl;
						break;
						
						case '3':
						cout<<"Accepted!"<<endl;
						break;
						
						case '4':
						cout<<"Accepted!"<<endl;
						break;
						
						case '5':
							cout<<"Accepted!"<<endl;
								break;
						
						case '6':
							cout<<"Accepted!"<<endl;
								break;
								
						case '7':
							cout<<"Accepted!"<<endl;
								break;
								
						case '8':
							cout<<"Accepted!"<<endl;
								break;
						
						case '9':
							cout<<"Accepted!"<<endl;
								break;
						
					default:
						{
							cout<<"Retry again"<<endl;
								break;
						}
					}
			}
		return 0;
}
	
