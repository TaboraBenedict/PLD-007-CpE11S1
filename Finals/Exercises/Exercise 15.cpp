#include <iostream>
 	#include <ctime>
 		using namespace std;
 			int main()
 	{
 		time_t now = time(0);  // Get current system time
 			cout << "Current time: " << ctime(&now) << endl;
 		return 0;
 
 }
 