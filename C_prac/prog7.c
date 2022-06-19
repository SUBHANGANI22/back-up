/*
you manage a travel agency and you want your n driver to input their following details:
1.Name
2.Driving license no
3.Route
4.Km

your program should be able to take n as input(or you can take n=3 for simplicity) and your driver will start inputting

your program should print details of the driver in a beautiful fashion

use stuructures
*/
#include<stdio.h>
struct data
{
    char name[50];
    int dlo;
    char route[50];
    float km;
}s1,s2,s3;
void details(struct data *d)
{
    printf("Enter your name: ");
    scanf("%49s",d->name);
    printf("Enter your driving licence no: ");
    scanf("%d",&d->dlo);
    printf("Enter route taken: ");
    scanf("%49s",&d->route);
    printf("Enter distance travelled: \n");
    scanf("%f",&d->km);
}
void output(struct data *d)
{
    printf("Driver name: %s\n", d->name);
    printf("Driving licence no: %d \n", d->dlo);
    printf("Route taken: %s\n", &d->route);
    printf("Distance travelled: %.2f \n", d->km);
}
int main()
{
        printf("\n--------------driver 1---------------\n");
        details(&s1);
        printf("\n");
        output(&s1);
        printf("\n--------------driver 2---------------\n");
        details(&s2);
        printf("\n");
        output(&s2);
        printf("\n--------------driver 3---------------\n");
        details(&s3);
        printf("\n");
        output(&s3);
    return 0;
}