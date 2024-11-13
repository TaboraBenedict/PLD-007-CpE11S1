#include<iostream>
	using namespace std;
	
	bool multiple(int n, int x)
	{
		return n % x == 0;
}

int main()
{
	int n, x;
	cout<<"Enter any integer sir: ";
	cin>>n;
	cout<<"Enter a divisor sir: ";
	cin>>x;
	
	if (multiple(n, x))
		cout<<"the value "<<n<<" is a multiple of "<<x<<endl;
		else
		cout<<"the value "<<n<<" is not a multiple of "<<x<<endl;
	return 0;
}	
