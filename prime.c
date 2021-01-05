#include<stdio.h>
void main()
{
    int num,c=2;
    printf("Enter a number to check whether prime or not\n");
    scanf("%d",&num);
    if(num<=1)
            printf("Prime numbers are greater than 1");
    for(c=2;c<=num-1;c++)
    {
        if(num%c==0)
         {
            printf("%d is not a prime number",num);
            break;
         }
    }
    if(c==num)
        printf("%d is prime number",num);
}