#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f",&a);
    b=(a*1.20)+100;
    c=(a*1.50)+100;
    d=(a*1.80)+240;
    e=(a*2)+240;
    if(a<=199)
    {
        printf("%.2f",b);
    }
    else if(a>=200&&a<400)
    {
        printf("%.2f",c);
    }
    else if(a>=400&&a<600)
    {
        printf("%.2f",d);
    }
    else if(a>=600)
    {
        printf("%.2f",e);
    }
}