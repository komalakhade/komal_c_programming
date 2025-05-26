#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n1.Addition \n2.substraction \n3.multiplication \n4.division\n");
    scanf("%d",&ch);
    printf("Enter 2 Number:");
    scanf("%d%d",&a,&b);
    switch(ch){
    case 1:
    printf("Addition is %d",a+b);
    break;
    case 2:
    printf("substraction is %d",a-b);
    break;
    case 3:
    printf("multiplication is %d",a*b);
    break;
    case 4:
    printf("Division is %d",a%b);
    break;
    printf("Invalid choice");
    return 0;
}
}