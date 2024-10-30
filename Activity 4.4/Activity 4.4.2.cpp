#include <iostream>
	using namespace std;
		int main() {
    		char given;
    			cout << "Enter a character: ";
    			cin >> given;

    			cout << "According to isdigit: ";
    			cout<<endl;
    			cout << (isdigit(given) ? given : ' ') << (isdigit(given) ? " is a digit." : " is not a digit.") << endl;
    			cout<<endl;
    			
    			cout << "According to isalpha: ";
    			cout<<endl;
			    cout << (isalpha(given) ? given : ' ') << (isalpha(given) ? " is a letter." : " is not a letter.") << endl;
    			cout<<endl;
    			
 			   	cout << "According to isalnum: ";
 			   	cout<<endl;
			    cout << (isalnum(given) ? given : ' ') << (isalnum(given) ? " is a digit or a letter." : " is not a digit or a letter.") << endl;
    			cout<<endl;
    			
 			   cout << "According to isxdigit: ";
 			   cout<<endl;
 			   cout << (isxdigit(given) ? given : ' ') << (isxdigit(given) ? " is a hexadecimal digit." : " is not a hexadecimal digit.") << endl;
    			cout<<endl;
    			
  			  cout << "According to islower: ";
  			  cout<<endl;
  			  cout << (islower(given) ? given : ' ') << (islower(given) ? " is a lowercase letter." : " is not a lowercase letter.")<<endl;
    			cout<<endl;
    			
 			   cout << "According to isupper: ";
 			   cout<<endl;
  			  cout << (isupper(given) ? given : ' ') << (isupper(given) ? " is an uppercase letter." : " is not an uppercase letter.")<<endl;
    			cout<<endl;
    			
  			  cout << "According to isspace: ";
  			  cout<<endl;
  			  cout << (isspace(given) ? given : ' ') << (isspace(given) ? " is a whitespace character." : " is not a whitespace character.")<<endl;
    			cout<<endl;
    			
  			  cout << "According to ispunct: ";
  			  cout<<endl;
  			  cout << (ispunct(given) ? given : ' ') << (ispunct(given) ? " is a punctuation character." : " is not a punctuation character.")<<endl;
    			cout<<endl;
    			
   			 cout << "According to isprint: ";
   			 cout<<endl;
   			 cout << (isprint(given) ? given : ' ') << (isprint(given) ? " is a printing character." : " is not a printing character.")<<endl;
    return 0;
}

