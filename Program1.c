
#include<stdio.h>
#include<stdlib.h>

//Function Name :Difference
//Description   : Used to calculate difference between summation of even digit and summation of odd digit.
//Input         : Integer,Integer Arrays
//Output        : Integer
//Date          : 07/05/2022
//Author        : Rajshri Popat Agre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountAddition(int Arr[], int iLength)
{
    int iCnt = 0, iEvenAddition = 0, iOddAddition=0, iDifference=0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if(Arr[iCnt] %2 == 0)
		{
         iEvenAddition = iEvenAddition + Arr[iCnt];
		}
    }
	for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if(Arr[iCnt] %2 != 0)
		{
         iOddAddition = iOddAddition + Arr[iCnt];
		}
    }
      return iDifference = (iEvenAddition - iOddAddition);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and return difference between summation of even elements and summation of odd elements
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountAddition(ptr, iSize);
    printf("Addition of given Number are : %d\n",iRet);
    free(ptr);
    return 0;
}