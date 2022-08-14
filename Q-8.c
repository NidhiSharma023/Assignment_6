//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            n=1;
            break;
        }
    }
    if(n==1)
    {
        printf("This number is not a prime number.");
    }
    else
    {
        printf("This number is a prime number.");
    }
    getch();
    return 0;
}
