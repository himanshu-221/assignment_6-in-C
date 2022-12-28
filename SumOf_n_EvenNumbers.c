// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter, How many even number you want to sum");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("sum of n even numbers is %d",sum);
    return 0;
}