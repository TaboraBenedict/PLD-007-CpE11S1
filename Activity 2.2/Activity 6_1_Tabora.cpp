#include<stdio.h>
	int main()
		{
			int num;
				printf("This program will determine whether a number is even or odd \n");
				printf("Input a number: \n");
				scanf("%d", &num);
	
			if(num%2==0) {
				printf("The number %d is even \n", num);
			}
					else {
				printf("The number %d is odd \n", num);
			}
	return 0;
}
