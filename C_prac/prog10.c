/*
WAP to perform matrix multiplication using 2d array to multiply two matrices.
The number of columns of the first matrix should be equal to the number of rows in the second matrix.
*/
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[100][100];
    int x,y;
    printf("Enter number of rows and columns for the first matrix: \n");
    scanf("%d",x);

   for(int i=0;i<x;i++)
   {
    for(int j=0;j<x;j++)
    {
        printf("Enter the element: ");
        scanf("%d",a[i][j]);
    }
   }
   
   for(int i=0;i<x;i++)
   for(int j=0;j<x;j++)
    printf(&a[i][j]);

    printf("Enter number of rows and columns for the first matrix: \n");
    scanf("%d",y);

   for(int i=0;i<y;i++)
   {
   for(int j=0;j<y;j++)
    {
        printf("Enter the element: ");
        scanf("%d",a[i][j]);
    }
   }
   for(int i=0;i<x;i++)
   for(int j=0;j<x;j++)
    printf(&a[i][j]);

    return 0;
}