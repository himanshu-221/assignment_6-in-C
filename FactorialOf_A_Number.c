//. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Fcatorial of %d is %d",n,fact);
    return 0;
}