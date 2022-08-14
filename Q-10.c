 //10. Write a program to reverse a given number.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int n,rem,rev;
     printf("Enter a number:");
     scanf("%d",&n);
     for(rev=0,rem=0;n!=0; )
     {
         rem=n%10;
         n=n/10;
         rev=rev*10+rem;
     }
     printf("Reverse is %d",rev);
     getch();
     return 0;
 }
