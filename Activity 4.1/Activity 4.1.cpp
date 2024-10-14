#include<iostream>
	using namespace std;
		int main()
			{
					int physics, chemistry, computer, math, biology;
					float average;
					char g;
					
									
					cout<<"Input your grade for the physics subject: ";
					cin>>physics;
					
					cout<<"Input your grade for the biology subject: ";
					cin>>biology;
					
					cout<<"Input your grade for the computer subject: ";
					cin>>computer;
					
					cout<<"Input your grade for the chemistry subject: ";
					cin>>chemistry;
					
					cout<<"Input your grade for the math subject: ";
					cin>>math;
					
					cout<<"------------------------------------------"<<endl;
					
						average=(physics+biology+math+computer+chemistry)/5;
							cout<<"Average is: "<<average<<endl;
				
			if (average>=90)
				{
					g='A';
				}
				else if (average>=80)
				{
					g='B';
				}
				else if (average>=70)
				{
					g='C';
				}
				else if (average>=60)
				{
					g='D';
				}
					else if (average>=40)
					{
						g='E';
					}
					else if (average<=39)
					{
						g='F';
					}
	switch(g)
	{
        case 'A':
            cout << "Grade Level: A" << endl;
            break;
        case 'B':
            cout << "Grade Level: B" << endl;
            break;
        case 'C':
            cout << "Grade Level: C" << endl;
            break;
        case 'D':
            cout << "Grade Level: D" << endl;
            break;
        case 'E':
            cout << "Grade Level: E" << endl;
            break;
        default:
            cout << "Grade Level: F" << endl;
            break;
			}
	return 0;
}
