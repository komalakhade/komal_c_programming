#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a Number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}