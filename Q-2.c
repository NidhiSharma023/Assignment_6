//2. Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum of Even Natural Numbers are %d",sum);
    getch();
    return 0;
}

