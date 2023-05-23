#include<stdio.h>
int main()
{
    int n,n1,reverse=0,rem;
    scanf("%d",&n);
    n1=n;
    while (n)
    {
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    if (n1==reverse)
    printf("True");
    else
    printf("False");
}    