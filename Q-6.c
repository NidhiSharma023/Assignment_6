//6. Write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of a number is %d",fact);
    getch();
    return 0;
}





