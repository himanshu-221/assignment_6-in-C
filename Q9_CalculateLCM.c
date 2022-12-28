//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two numbers to calculate LCM\n");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1*num2;i++)
    {
        if((i%num1 == 0) && (i%num2 == 0))
        {
            printf("LCM of %d and %d is %d",num1,num2,i);
            break;
        }
    }
    return 0;
    
}