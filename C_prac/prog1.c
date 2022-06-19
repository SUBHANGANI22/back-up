/*WAP to print a multiplication table of a number entered by the user in pretty form*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Table of %d\n",a);
    printf("1 x %d=%d\n",a,1*a);
    printf("2 x %d=%d\n",a,2*a);
    printf("3 x %d=%d\n",a,3*a);
    printf("4 x %d=%d\n",a,4*a);
    printf("5 x %d=%d\n",a,5*a);
    printf("6 x %d=%d\n",a,6*a);
    printf("7 x %d=%d\n",a,7*a);
    printf("8 x %d=%d\n",a,8*a);
    printf("9 x %d=%d\n",a,9*a);
    printf("10 x %d=%d\n",a,10*a);
    return 0;
}