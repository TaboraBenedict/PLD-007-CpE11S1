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
				
					switch(g)
						{
							case 90 ... 100:
							cout<<"Grade Level: A"<<endl;
							break;
							
							case 80 ... 89:
							cout<<"Grade Level: B"<<endl;
							break;
							
							case 70 ... 79:
							cout<<"Grade Level: C"<<endl;
							break;
							
							case 40 ... 69:
							cout<<"Grade Level: D"<<endl;
							break;
							
							case 1 ... 39:
							cout<<"Grade Level: E"<<endl;
							break;
						}
				return 0;
			}
