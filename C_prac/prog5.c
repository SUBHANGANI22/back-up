#include <stdio.h>
int n, arr[100];
void input()
{
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void rev()
{

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    input();
    printf("The integer in reversed is:");
    rev();
    return 0;
}