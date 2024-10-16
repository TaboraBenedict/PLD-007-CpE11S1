#include<iostream>
	using namespace std;
		int main()
			{
				//create a c++ to determine if the alphabet is vowel or instrument
				char c;
				
					cout<<"Enter any letter or character: "<<endl;
					cin>>c;
				
					switch (c)
					{
						case 'a':
						cout<<"That is a vowel! Good choice"<<endl;
						break;
						
						case 'A':
						cout<<"Still a vowel, good try"<<endl;
						break;
						
						case 'e':
						cout<<"Another vowel! Good choice"<<endl;
						break;
						
						case 'E':
						cout<<"Still a vowel, try another vowel"<<endl;
						break;
						
						case 'i':
						cout<<"Another vowel!"<<endl;
						break;
						
						case 'I':
						cout<<"Still a vowel.."<<endl;
						break;
						
						case 'o':
						cout<<"Great! another vowel"<<endl;
						break;
						
						case 'O':
						cout<<"Still a vowel.."<<endl;
						break;
						
						case 'u':
						cout<<"Great! a vowel"<<endl;
						break;
						
						case 'U':
						cout<<"Still a vowel.."<<endl;
						
							default:
								{
									cout<<"consonant";
									break;
								}
						
					}
				return 0;
			}
