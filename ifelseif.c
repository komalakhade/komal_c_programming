#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 number:");
    scanf("%d%d%d",&a,&b,&c);
    if(c>=a&&c>=b)
    printf("max is %d",c);
    else if(a>=b&&a>=c)
    printf("max is %d",a);
    else
    printf("max is %d",b);
}