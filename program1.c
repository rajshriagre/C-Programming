//copmlete below code snippets

#include<stdio.h>

//////////////////////////////////////////////////////
//
//Function Name : Divide
//Description :   Used to perform division of 2 number
//Input :         Integer ,Integer
//Output :        Integer
//Date :          19/04/2022
//Author :        Rajshri Popat Agre
//
///////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
	int iAns = 0;
	
	if(iNo2 < 0)
	{
		return -1;
		
	}
	iAns = iNo1/iNo2;
	
	return iAns;
}

 //////////////////////////////////////////////////////
 //write a program to perform division of 2 number.
 //////////////////////////////////////////////////////
 
int main()
{
    int iValue1 = 15;
	int iValue2 = 5;
	int iRet = 0;
	
	iRet = Divide(iValue1,iValue2);
	printf("Division is : %d\n",iRet);              //Division is 3

	return 0;
}