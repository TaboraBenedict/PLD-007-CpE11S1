#include<iostream>
	using namespace std;
		int main()
		{
			//Where b=Base, h=Height, and a=Area
			//settings
			double b,h,a;
				
				cout<<"This program was built to compute the area of the rectangle"<<endl;
				
				cout<<"Enter the based of the rectangle: "<<endl;
					cin>>b;
				
				cout<<"Enter the height of the rectangle: "<<endl;
					cin>>h;
				
				a=0.5*b*h;
					cout<<"The Calculated area is: "<<a<<endl;
			return 0;
		}