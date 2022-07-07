#include<stdio.h>
#include<stdlib.h>

//Function Name :FirstOccu
//Description   : Used to calculate index of first occurance of given number 
//Input         : Integer,Integer Arraya,Integer
//Output        : Integer
//Date          : 07/05/2022
//Author        : Rajshri Popat Agre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int FirstOccu(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if(Arr[iCnt] == iNo)
		{
         return iCnt;
		}
    }
	
	
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and accept one another number as No return index of first occurrence of that No
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
	int iRet = 0;
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

    iRet = FirstOccu(ptr, iSize,iValue);
	
	printf("Index is:%d\n",iRet);
	

    free(ptr);
    return 0;
}