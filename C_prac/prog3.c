/*WAP to fibonacci series using recursion*/
#include <stdio.h>
int fibonacci(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The number in fibonacci series is:\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d\t", fibonacci(i));
    }
    return 0;
}