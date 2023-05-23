#include<stdio.h>
int main()
{
    int n,n1,rem,reverse=0;
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        rem=n1%10;
        n1=n1/10;
        reverse=reverse*10+rem;
    }
    printf("%d",reverse);
}