#include<stdio.h>
	int main()
		{
			double gallons;
			double miles;
			double totalused;
			
				while(true)
				{
					printf("Enter the gallons used: ");
					scanf("%lf", &gallons);
					
					if(gallons==-1) {
						break;
					}
					
					printf("Enter the miles driven: ");
					scanf("%lf", &miles);
					
					totalused=miles/gallons;
					
					printf("The total miles / gallons that was used for this tank was: %lf ", totalused);
					
					return 0;
				}
		}
