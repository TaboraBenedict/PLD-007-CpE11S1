#include <iostream>
using namespace std;

int main() {

    char chars1[] = {'p', 'P', '5', '!'};
    
    string startpoint("According to islower: ");
    cout<<startpoint<<endl;


    for (int i = 0; i < sizeof(chars1) / sizeof(chars1[0]); i++) 
	{
        char ch = chars1[i];
        if (islower(ch)) 
		{
            cout<<ch<<" is a lowercase letter"<<endl;
        } else {
            cout<<ch<<" is not a lowercase letter"<<endl;
        }
    }
    
    cout<<endl;
    
    char chars2[] = {'D', 'd', '8', '&'};
    
    string startpoint2("According to isupper: ");
    cout<<startpoint2<<endl;
    	
    	for (int k = 0; k < sizeof(chars2) / sizeof(chars1[0]); k++ )
    	{
    		char ch= chars2[k];
    		if(isupper(ch))
    		{
    			cout<<ch<<" is an uppercase letter"<<endl;
			}
			else
			{
				cout<<ch<<" is not an uppercase letter"<<endl;
			}
		}
		
	cout<<endl;
	
	char chars3[]= {'u', '7', '$', 'L'};
	string startpoint3("According to conversion: ");
	cout<<startpoint3<<endl;
	
		for (int j = 0; j < sizeof(chars3) / sizeof(chars3[0]); j++)
			{
				char ch= chars3[j];
				if(islower(ch))
				{
					char upperchar=toupper(ch);
					cout<<ch<<" converted to uppercase is "<<upperchar<<endl;
				}
				else if (ch == 'u')
				{
					cout<<ch<<" converted to lowercase is "<<ch<<endl;
				}
				else if (ch == 'L')
				{
					char lowerchar=tolower(ch);
					cout<<ch<<" converted to lowercase is "<<lowerchar<<endl;
				}
				else
				{
					cout<<ch<<" converted to uppcase is "<<ch<<endl;
				}
			}
    return 0;
}

