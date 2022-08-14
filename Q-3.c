//3. Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum of Odd Natural Numbers are %d",sum);
    getch();
    return 0;
}


