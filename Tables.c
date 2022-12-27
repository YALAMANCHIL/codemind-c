#include<stdio.h>
int main()
{
    int n,i,k,l;
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i=i+2)
    {
        l=n*i;
        printf("%d x %d = %d
",n,i,l);
    }
}
    