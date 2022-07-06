
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////
//
//Function Name : Display
//Description   : Used to perform display 5 to 1 unmber      
//Input         : Integer
//Output        : Integer
//Date          : 19/04/2022
//Author        : Rajshri Popat Agre
//
///////////////////////////////////////////////////////

int Cheak(int iNO)
{
	if((iNO % 5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}	
}

 //////////////////////////////////////////////////////////////
// Accept one number & cheak whether it is divisible by 5 or not
 //////////////////////////////////////////////////////////////
 
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = Cheak(iValue);
	
	if(bRet==TRUE)
	{
		printf("Divisible");
	}
	else
	{
		printf("Not Divisible by 5");
	}

	return 0;
}