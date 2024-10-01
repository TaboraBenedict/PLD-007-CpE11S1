#include<stdio.h>
#include<iostream>
	int main()
	{
		int j=31,f=29,m=31,a=30,m2=31,j2=30,j3=31,a2=31,s=30,o=31,n=30,d=31;
		int Daysinfirsthalf=j+f+m+a+m2+j2;
		int Daysinsecondhalf=j3+a2+s+o+n+d;
		int Dyear=Daysinfirsthalf+Daysinsecondhalf;
		
		printf("Days in the first half of the current year: %d\n", Daysinfirsthalf);
		printf("Days in the second half of the current year: %d\n", Daysinsecondhalf);
		printf("Days of the current year: %d\n", Dyear);
		return 0;
	}