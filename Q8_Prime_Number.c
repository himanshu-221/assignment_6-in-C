//Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number to check prime number or not\n");
    scanf("%d",&num);
    for(int i=2; i<=(num/2); i++)
     {
         if( num%i==0)
         {
            count++;
            break;
         }
     }
     if(count==0)
     {
         printf("Number is prime!");
     }
     else{
         printf("Not prime!");
     }
    return 0;
}