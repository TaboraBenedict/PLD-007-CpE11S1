#include<iostream>
	using namespace std;
		int main()
			{
					int physics, chemistry, computer, math, biology;
					float average;	
									
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
					cout<<"Grade Level: A"<<endl;
				}
				else if (average>=80)
				{
					cout<<"Grade Level: B"<<endl;
				}
				else if (average>=70)
				{
					cout<<"Grade Level: C"<<endl;
				}
				else if (average>=60)
				{
					cout<<"Grade Level: D"<<endl;
				}
					else if (average>=40)
					{
						cout<<"Grade Level: E"<<endl;
					}
					else if (average<=39)
					{
						cout<<"Grade Level: F"<<endl;
					}
		return 0;
}