// Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int num,rem=0,num1=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num1=num1*10+rem;
        num=num/10;
    }
    printf("Reverse %d",num1);
    return 0;
}