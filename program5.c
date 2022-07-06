#include<stdio.h>

//////////////////////////////////////////////////////
//
//Function Name : Accept
//Description   : Used to perform display "*" 
//Input         : Integer
//output        : Integer
//Date          : 20/04/2022
//Author        : Rajshri Popat Agre
//
///////////////////////////////////////////////////////

int Accept(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo ; iCnt++)
	{
		printf("*\n");
	}
	
}

 //////////////////////////////////////////////////////////////////
 //Accept one number from user and print that number of * on scrren
 //////////////////////////////////////////////////////////////////
 
int main()
{
	int iValue = 0;
	iValue = 5;
	
    Accept(iValue);

	return 0;
}