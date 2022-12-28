//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of odd number is %d",sum);
    return 0;
}