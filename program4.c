#include<stdio.h>
#include<stdlib.h>

//Function Name :Renge
//Description   : Used to Display elements of given Renge of values.
//Input         : Integer,Integer Arraya,Integer,Integer
//Date          : 08/05/2022
//Author        : Rajshri Popat Agre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void Renge(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if((Arr[iCnt] > iNo1)&&(Arr[iCnt]<iNo2))
		{
         printf("number is %d\n",Arr[iCnt]);
		}
    }
	
	
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and accept Renge,Display all elements from that Renge.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0,  iValue2 = 0;
	int iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);
	
	printf("Enter starting point : \n");
    scanf("%d",&iValue1);
	
	printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
	
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Renge(ptr, iSize,iValue1,iValue2);
	
    free(ptr);
    return 0;
}