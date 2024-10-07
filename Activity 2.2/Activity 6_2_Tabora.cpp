#include<stdio.h>
	int main()
		{
			int age;
			int Neither;
			int MinimumFare=9;
			int DS=9-0.72;
			int DS2=9-0.9;
			
				printf("The minimum fare is 9 pesos.\n");
				printf("Please Enter your age to apply discount fare \n");
				scanf("%d", &age);
			
			if (age<23) {
				printf("your discounted fare is %d \n", DS);
			}
				else if (age>59) {
				printf("your discounted fare is %d \n ", DS2);
			}
				else {
				printf("unfortunately, you dont have any discount fare\n", Neither);
			}
			while(true);
	return 0;		
}
