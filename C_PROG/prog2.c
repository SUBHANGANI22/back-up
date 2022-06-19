#include <stdio.h>
#include <string.h>
#define MAX 100

int k = -1;
char item;
char stack_string[MAX];

void push(char ch)
{
    if (k == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    k++;
    stack_string[k] = ch;
}
char pop()
{
    if (k == -1)
    {
        printf("Stack underflow\n");
        return 0;
    }
    item = stack_string[k];
    k--;
    return item;
}
int main()
{
    char a[MAX];
    int i;
    printf("Input a string\n");
    gets(a);
    for (i = 0; i < strlen(a); i++)
        push(a[i]);
    for (i = 0; i < strlen(a); i++)
        a[i] = pop();
    printf("Reversed String is\n%s\n", a);
    return 0;
}