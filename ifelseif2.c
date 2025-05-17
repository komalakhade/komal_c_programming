#include<stdio.h>
#include<math.h> 
int main()
{
  int a,b,c;
  printf("Enter the 3 number:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  b=(a>b)?a:b;
  b=(c>b)?c:b;
  b=(b>a)?b:b;
  printf("max is %.5f",fmax(a,fmax(b,c)));
  return 0;

}