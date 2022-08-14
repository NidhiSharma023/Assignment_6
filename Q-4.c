//4. Write a program to calculate sum of squares of first N natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of squares of natural numbers are %d",sum);
    getch();
    return 0;
}



