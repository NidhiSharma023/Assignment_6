//7. Write a program to count digits in a given number.
#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        n=n/10;
    }
    printf("Number of digits is %d",i);
    getch();
    return 0;
}
