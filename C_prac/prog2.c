/*WAP to ask the user which type of conversion he wants and display the result 
km to miles
inches to foot
cm to inches
pound to kg 
inches to meter
*/
#include<stdio.h>
int main()
{
    float km =0.621371;
    float inch =0.083333;
    float cm =0.393701;
    float pound =0.4535592;
    float meter =0.0254;
    int x;
    float a,b;

    while(1)
    {
        printf("Enter your choice\n1.km to miles\n2.inches to foot\n3.cm to inches\n4.pound to kg\n5.inches to meter\n0.Quit\n");
        scanf("%c",&x);

        switch (x)
        {
        case '1':
            printf("Enter your number\n");
            scanf("%f",&a);
            b=a*km;
            printf("%.2f km is equal to %.2f miles\n",a,b);
            break;
        case '2':
            printf("Enter your number\n");
            scanf("%f",&a);
            b=a*inch;
            printf("%.2f inch is equal to %.2f foot\n",a,b);
            break;
        case '3':
            printf("Enter your number\n");
            scanf("%f",&a);
            b=a*cm;
            printf("%.2f cm is equal to %.2f inch\n",a,b);     
            break;
        case '4':
            printf("Enter your number\n");
            scanf("%f",&a);
            b=a*pound;
            printf("%.2f pound is equal to %.2f kg\n",a,b);
            break;
        case '5':
            printf("Enter your number\n");
            scanf("%f",&a);
            b=a*meter;
            printf("%.2f inch is equal to %.2f meter\n",a,b);
            break;
        case '0':
            printf("Exciting!");
            break;
        default:
            break;
        }
    }
    return 0;
}