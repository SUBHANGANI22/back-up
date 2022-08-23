/*WAP to ask to use choose 1 for triangular star pattern and 1 for reverse triangular star using function and switch case*/
#include<stdio.h>
void tp()
{
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=i; j++)
        printf("*");
        printf("\n");
    }
}
void rtp()
{
    for (int i = 4; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        printf("*");
        printf("\n");
    }
}
int main()
{
    int a;
    printf("Enter your choice\n1.triangular star pattern\n2.reverse triangular star pattern\n0.quit\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            tp();
            break;
        case 2:
            rtp();
            break;
        case 0:
            goto exit;
        default:
            printf("Wrong Choice");
            break;
    }
    exit:
    return 0;
}