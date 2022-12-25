#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c=='v')
    {
        printf("violet");
    }
    else if (c=='l')
    {
        printf("indigo");
    }
    else if(c=='B')
    {
        printf("Blue");
    }
    else if(c=='G')
    {
        printf("Green");
    }
    else if(c=='Y')
    {
        printf("Yellow");
    }
    else if(c=='o')
    {
        printf("Orange");
    }
    else if(c=='R')
    {
        printf("Red");
    }
    else 
    {
        printf("-1");
    }
}