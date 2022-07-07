#include<stdio.h>
#include<stdlib.h>

//Function Name :Product
//Description   : Used to calculate product of all the odd number.
//Input         : Integer,Integer Arraya,Integer,Integer
//Date          : 08/05/2022
//Author        : Rajshri Popat Agre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProduct = 1;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if((Arr[iCnt] % 2)!= 0)
		{
         iProduct = iProduct * Arr[iCnt];
		}
    }
	
	return iProduct;
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and return product of all the odd number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0;
	int iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);
	
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
	
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr, iSize);
	
	printf("product of odd element is:%d\n",iRet);
	
    free(ptr);
    return 0;
}