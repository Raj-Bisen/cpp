#include<stdio.h>

int Addition(int iValue1 , int ivalue2)
{
    int iSum = 0 ;
    iSum = iValue1 + iValue2;
    return iSum;
  
}
int main()
{
    int iNo1 = 0 , iNo2 = 0 , iRet = 0; 
    printf("Enter first number");
    scanf("%d",&iNo1);
    
    printf("Enter second number");
    scanf("%d",&iNo2);
  
    iRet = Addition(iNo1,iNo2);
    printf("Addition is : %d",iRet);
  
    return 0;
}
