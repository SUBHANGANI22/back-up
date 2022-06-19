#include<stdio.h>
#define SIZE 100
int k = -1;
int stack[SIZE],n,x,ch;
void push()
{
    if(k>=n-1)
    {
        printf("Stack Overflow\n");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        k++;
        stack[k]=x;
    }
}
void pop()
{
    if(k<=-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("The popped elements is %d\n",stack[k]);
        k--;
    }
}
void display()
{
    if(k>=0)
    {
        printf("The Stack elements are: \n");
        for(int i=k; i>=0; i--)
            printf("%d\n",stack[i]);
    }
    else
        printf("The Stack is empty\n");
   
}
int main()
{
    printf("Enter the size of Stack:\n");
    scanf("%d",&n);
    printf("Stack using Array\n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    do
    {
        printf("Enter the Choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                printf ("Wrong Choice\n");
            }
                
        }
    }
    while(ch!=0);
    return 0;
}
