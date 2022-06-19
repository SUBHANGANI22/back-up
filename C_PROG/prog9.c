#include <stdio.h>
void maxmin(int, int);
int max, min, a[10];
int main()
{
    int n, i;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the array elements");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    maxmin(0, n - 1);
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}
void maxmin(int i, int j)
{
    int max1, min1, mid;
    if (i == j)
        max = min = a[i];
    else
    {
        mid=(i + j) / 2;
        maxmin(i, mid);
        max1 = max;
        min1 = min;
        maxmin(mid + 1, j);
        if (max < max1)
            max = max1;
        else if (min > min1)
            min = min1;
    }
}