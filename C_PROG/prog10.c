#include <stdio.h>
void merge(int A[], int l, int m, int u)
{
    int i, j, k, t, b[10];
    i = k = l;
    j = m + 1;
    while (i <= m && j <= u)
    {
        if (A[i] < A[j])
            b[k++] = A[i++];
        else
            b[k++] = A[j++];
    }

    if (j > u)
    {
        for (t = i; t <= m; t++)
            b[k++] = A[t];
    }
    else
    {
        for (t = j; t <= u; t++)
            b[k++] = A[t];
    }

    for (t = l; t <= u; t++)
        A[t] = b[t];
}

void merge_sort(int A[], int l, int u)
{
    int m;
    if (l < u)
    {
        m = (l + u) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, u);
        merge(A, l, m, u);
    }
}

int main()
{
    int A[10], n, i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    merge_sort(A, 0, n - 1);
    printf("The shortest array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}