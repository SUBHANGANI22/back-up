#include <stdio.h>
int arr[10];
int bsearch(int l, int u, int x)
{
    while (l <= u)
    {
        int m = (u + l) / 2;
        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] > x)
           return bsearch(l, m - 1, x);
        else
           return bsearch(m + 1, u, x);
    }
    if (l > u)
    {
        return -1;
    }
}
int main()
{
    int i, j, n, x;
    printf("Enter the number of elements in an array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of an array\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d", &x);
    j = bsearch(0, n - 1, x);
    if (j == -1)
    {
        printf("Element %d was not found in the array\n", x);
    }
    else
    printf("Element %d was found at index %d in the array\n", x, j+1);
    return 0;
}