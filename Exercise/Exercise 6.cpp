#include<iostream>
	using namespace std;
		int linearSearch(int arr[], int size, int target)
			{
				for (int i=0;i<size;i++) 
				{
				
					if (arr[i]==target)
						{
							return i; //return the index if found
						}
					}
				return -1; //return to -1 if not found
			}
	
	int main()
		{
			int arr[]={5,3,8,4,2};
			int size=sizeof(arr)/sizeof(arr[0]);
			int target;
			int result;
			
				cout<<"Enter a number to search: ";
				cin>>target;
				
				
			int reult=linearSearch(arr,size,target);
			if (result!=1)
				{
					cout<<"Element not found at index: "<<result<<endl;
				}
			else 
			{
				cout<<"Element not found."<<endl;
			}
		return 0;
}		
