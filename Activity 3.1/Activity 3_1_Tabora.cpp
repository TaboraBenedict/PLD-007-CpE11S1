#include<stdio.h>
#include<iostream>
	int main()
		{
			int AccountNumber;
			float Bal;
			float newbal;
			float totalcharges;
			float totalcredits;
			double creditlimits=5500.00;
			
			while(true)
			{
			printf("Enter your accounct number: ");
				scanf("%d", &AccountNumber);
			
				
			if(AccountNumber==-1) {
				break;
			}
				printf("Enter your balance: ");
				scanf("%f", &Bal);
				
				printf("Enter your new balance: ");
				scanf("%f", &newbal);
				
				printf("Enter the total charges you want: ");
				scanf("%f", &totalcharges);
				
				printf("Enter the total credits you want: ");
				scanf("%f", &totalcredits);
				
				newbal=Bal+totalcharges-totalcredits;
				
				printf("Account number: %d \n", AccountNumber);
				printf("Balance: %f \n", Bal);
				printf("New balance: %f \n", newbal);
				printf("Credit Limit %lf \n", creditlimits);
				
					if (newbal>creditlimits)
					{
						printf("Credit Limit exceeded. \n");
					}
						else
					{
						printf("You still have available credit. \n");
					}
					
			return 0;	
	}
}
