/*WAP to parse the content of the string using function
    <h1>this is heading<h1>
    output:- this is heading
    <spam>this is heading<spam>
    output:- this is heading
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int a, k = 0;
    char line[] = "<h1>this is heading<h1>";
    puts(line); 
    a = strlen(line);
    for (int i = 0; i < a; i++)
    {
        if (line[i] == '<')
        {
            k = 0;
            continue;
        }
        else if (line[i] == '>')
        {
            k = 1;
            continue;
        }
        if (k == 1)
        {
            printf("%c", line[i]);
        }
    }

    return 0;
}