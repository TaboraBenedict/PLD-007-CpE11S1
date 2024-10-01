#include<stdio.h>
#include<iostream>
	int main()
	{
		int j=31,f=29,m=31,a=30,m2=31,j2=30,j3=31,a2=31,s=30,o=31,n=30,d=31;
		int DayQ1=j+f+m;
		int DayQ2=a+m2+j2;
		int DayQ3=j3+a2+s;
		int DayQ4=o+n+d;
		
		printf("Days in Q1 of the current year: %d\n", DayQ1);
		printf("Days in Q2 of the current year: %d\n", DayQ2);
		printf("Days in Q3 of the current year: %d\n", DayQ3);
		printf("Days in Q4 of the current year: %d\n", DayQ4);
		return 0;
	}