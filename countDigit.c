//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,digit=0,rem;
    printf("Enter a whole number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        rem=n%10;
        digit++;
    }
    printf("%d",digit);
}