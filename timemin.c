#include<stdio.h>
#include<conio.h>
void main()
{
    int s,h=0,m;
    printf("enter the time in minutes: ");
    scanf("%d",&s);
    if(s>60)
    {
        h=s/60;
        m=n%60;
        printf("%d %d",h,m);
    }
    else
    {
        printf("%d %d",h,s);
    }
    getch()
}

