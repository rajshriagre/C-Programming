#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//Function Name :Display
//Description   : Used to cheak whether given numbers contain 11 in it or not. 
//Input         : Integer,Integer Arraya
//Output        : Boolean
//Date          : 07/05/2022
//Author        : Rajshri Popat Agre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL Cheak(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if(Arr[iCnt] == iNo)
		{
         return TRUE;
		}
    }
	return FALSE;
	
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and accept one another number as No cheak whether NO is present or not..
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
	BOOL bRet = FALSE;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);
	
	printf("Enter another number : \n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
	
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Cheak(ptr, iSize,iValue);
	
	if(bRet == TRUE)
	{
	printf("number is present\n");
	}
	
	else
	{
		printf("number is not present\n");
	}

    free(ptr);
    return 0;
}