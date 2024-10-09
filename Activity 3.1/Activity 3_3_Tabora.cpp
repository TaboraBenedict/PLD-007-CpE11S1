#include<stdio.h>
	int main()
		{
			double weight;
			double cost;
			double basecost=5;
			double newcost;
			double nweight;
			int maxweight=1000;
				
				printf("Enter the weight of the parcel in grams (The MAX IS 1K GRAMS): ");
				scanf("%lf", &weight);
				
				if (weight<=1000)
					{
						newcost=2*((weight-300)/100);
						cost=basecost+newcost;
						printf("The cost is: %.2f", cost);
					}
					else
					{
						printf("The parcel has exceed the maximum amount of 1000 grams");
					}
			return 0;
		}
