#include <stdio.h>

		int main() 
	{
    		double principal=1000.00; 
    		double rate=0.05;         
    		int years=10;             
    		double amount; 

    			for (int n=1;n<=years;n++) 
					{
       					amount = principal*(1+rate);
        				principal = amount;

        				printf("Year %d: $%.2f\n", n, amount);
    }
    return 0;
}
