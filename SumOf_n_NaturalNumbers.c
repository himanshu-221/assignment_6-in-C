//. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of %d natural numbers is %d\n",n,sum);
    return 0;
}