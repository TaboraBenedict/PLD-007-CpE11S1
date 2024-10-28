#include<iostream>
	 using namespace std;
	 	
	 	int main()
	 	
	 	{
	 		
		//string was used because int nor char is not working
	 	string array[7]={"Sunday", "Monday" , "Tuesday" ,"Wednesday" ,"Thursday" ,"Friday", "Saturday"};
	 	
	 	int day;
	 	cout<<"Enter a the date today: ";
	 	cin>>day;
	 	
	 	//the process to get the actual date starting from zero value ez
	 		if (day>=0 && day<7)
	 			{
	 				cout<<array[day]<<endl;
				 }
			else 
			{
				cout<<"Error, there is no such day brother."<<endl;
			}
	 	
	 	return 0;
}
