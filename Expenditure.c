#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=(y*30)-x;
    if(z<0)
    printf("YES");
    else
    printf("NO");
}