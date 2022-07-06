#include<stdio.h>

//////////////////////////////////////////////////////
//
//Function Name : Display
//Description :   Used to perform display 5 to 1 unmber
//Date :          19/04/2022
//Author :        Rajshri Popat Agre
//
///////////////////////////////////////////////////////

int Display()
{
	int i = 0;
	
	for(i = 5; i >= 1 ; i--)
	{
		printf("%d\n",i);
	}
	
}

 //////////////////////////////////////////////////////
 //program to print 5 to 1 number on screen
 //////////////////////////////////////////////////////
 
int main()
{
    Display();

	return 0;
}