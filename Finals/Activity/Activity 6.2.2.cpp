#include <iostream>
#include <cmath>  
	using namespace std;

			double hypotenuse(double a, double b) 
		{
    			return sqrt(a * a + b * b);
			}

			int main() {
    	double side1, side2;

    		cout<<"Enter the length of the side 1: ";
    				cin>>side1;
    			cout<<"Enter the length of the side 2: ";
    			cin>>side2;

    			double hyp = hypotenuse(side1, side2);
    		cout<<"The length of the hypotenuse is: "<<hyp<< endl;
    return 0;
}

