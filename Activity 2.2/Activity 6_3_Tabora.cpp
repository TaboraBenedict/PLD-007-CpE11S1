#include<iostream>
#include<stdio.h>
	int main()
		{
			int grades;
			int total;
			int counter;
			double average;
			
				printf("Enter your grade (-1 to end): ");
				scanf("%d", &grades);
				
			while (grades!=-1)
			{
				total+=grades;
				counter++;
				
				printf("Enter your grade (-1 to end): ");
				scanf("%d", &grades);
				
			}
			
					if (counter!=0)
					{
						average= total / counter;
						
						printf("Average grade: %.2f", average);
						}
						else
					{
						printf("an error has occured, please try again.");
						}
		return 0;
	}
	