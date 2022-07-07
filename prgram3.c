#include<stdio.h>
#include<stdlib.h>

//Function Name :Display
//Description   : Used to Display all such elements which are even number and divisible by 5.
//Input         : Integer,Integer Arraya
//Date          : 07/05/2022
//Author        : Rajshri Popat Agre
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
		if((Arr[iCnt]% 2 == 0)&&(Arr[iCnt] %5 == 0))
		{
         printf("Divisible number is:%d\n",Arr[iCnt]);
		}
    }
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accept N number from user and Display all such elements which are even number and divisible by 5.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
	
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);
    
    free(ptr);
    return 0;
}