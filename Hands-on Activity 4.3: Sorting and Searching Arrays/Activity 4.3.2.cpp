#include<iostream>
	using namespace std;
		int main()
		{
			char chess[8][8] = {
			{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
			{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			{""},
			{""},
			{""},
			{""},
			{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
			{'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'},
		};
		
			for (int i=0;i<8; ++i) {
				for (int j=0;j<8; ++j) {
					cout<<chess[i][j]<<' ';
				}
		cout<<endl;
			}
	return 0;
}
