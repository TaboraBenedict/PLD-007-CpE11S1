#include<iostream>
//Coded by tabora

	using namespace std;
		int main() 
		
		 {
			// initialization of variables
			int grade=0;
			

				// settings
				cout<<"Kindly input your grade"<<endl;
				cout<<"Input the value: ";
					cin>>grade;
					
				// process
				if ((grade>=94)&&(grade<=100))
				{
					cout<<"Excellent"<<endl;
					}
				else if ((grade>=88.5)&&(grade<=93.99))	
				{
					cout<<"Superior"<<endl;
					}					
				else if ((grade>=83)&&(grade<=88.49))			
				{
					cout<<"Meritorious"<<endl;
					}
				else if ((grade>=77.5)&&(grade<=82.99))			
				{
					cout<<"Very Good"<<endl;
					}
				else if ((grade>=72)&&(grade<=77.49))			
				{
					cout<<"Good"<<endl;
					}
				else if ((grade>=65.5)&&(grade<=71.99))			
				{
					cout<<"Very Satisfactory"<<endl;
					}
				else if ((grade>=61)&&(grade<=65.49))			
				{
					cout<<"Satisfactory"<<endl;
					}
				else if ((grade>=55.5)&&(grade<=60.99))			
				{
					cout<<"Fair"<<endl;
					}
				else if ((grade>=50)&&(grade<=55.49))			
				{
					cout<<"Passing"<<endl;
					}
				else if ((grade>=0)&&(grade<=49.99))			
				{
					cout<<"Failed"<<endl;
				}
				
		return 0;
	}
