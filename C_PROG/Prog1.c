#include <stdio.h>
#include <string.h>
#define SIZE 100
int k = -1;
char stack[SIZE];

void push(char ch)
{
    if (k == (SIZE - 1))
        printf("Stack overflow\n");
        k++;
        stack[k] = ch;
}
char pop()
{
    if (k == -1)
        printf("Stack underflow\n");
        return stack[k--];
}
int main()
{
    char s[SIZE];
    printf("Enter a string\n");
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        push(s[i]);
    }
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = pop();
    }
    printf("The reversed string is %s\n", s);
    return 0;
}