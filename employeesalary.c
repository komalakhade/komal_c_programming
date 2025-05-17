#include<stdio.h>
int main()
{
    int eid;
    char ename[n];
    float bs,tax,hra,da,totalsalary;
    printf("enter a employee details");

    printf("ID");
    scanf("%d",&eid);

    printf("Name:");
    scanf("%s",&ename);

    printf("Basic salary:");
    scanf("%f",&bs);

    printf("DA:");
    scanf("%f",&da);

    printf("TAX(%):");
    scanf("%f",&tax);

    printf("HRA(%):");
    scanf("%f",&hra);

    totalSalary=bs+(bs*(da+hra-tax)/100);
    printf("Total salary:%f",totalSalary);

    return 0;

}