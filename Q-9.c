//9. Write a program to calculate LCM of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,n;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            break;
        }
    }
    printf("LCM of %d and %d is %d",a,b,i);
    getch();
    return 0;
}

