/*
Suppose ADC is a private limited company which manage the employee records of other companies.
Employee id can be of any length and it contains any characters.The following are the tasks you have to perform for these employees:
1. take the lenght of an employee id as an input and store it in an integral length 
2. take an empoloyee id as an input and display it on the screen 
3. save the employee id in a character array ,which is allocated dynamically
4. create one character array dynamically
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;char* id;
    printf("Enter lenght of the employee id\n");
    scanf("%d",&n);
    id=(char*)calloc(n,sizeof(char));
    printf("Enter employee's id: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&id[i]);
    }
    printf("\nEmployeel's id: ");
    for (int i = 0; i < n; i++)
    printf("%s",&id[i]);

    return 0;
}