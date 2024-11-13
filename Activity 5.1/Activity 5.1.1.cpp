#include<iostream>
	using namespace std;
	
	struct BitReverser {
		unsigned int value;
		
		unsigned int reverseBits()
		{
			unsigned int result=0;
			unsigned int temp=value;
			for (int i=0; i < 32; ++i)
			{
				result=(result<<1) | (temp & 1);
				temp>>=1;
			}
		 return result;
		}

	void printBits(unsigned int n)
	{
		for (int i=31; i >=0; --i)
			cout<<((n>>i) & 1);
	}
	
	void displaytable()
	{
		cout<<"Original Bits: ";
		printBits(value);
		cout<<endl;
		cout<<"Reversed Bits : ";
		printBits(reverseBits());
		cout<<endl;
	}
};
	int main()
	{
		BitReverser reverser;
		cout<<"Type any integer: ";
		cin>>reverser.value;
		reverser.displaytable();
	
	return 0;
}
