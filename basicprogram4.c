#include<stdio.h>
int main()
{
    float p, t, r, si;

    printf("\nEnter the principle amount = ");
    scanf("%f",&p);
    printf("\nEnter the time = ");
    scanf("%f",&t);
    printf("\nEnter the rate of interest = ");
    scanf("%f",&r);

    si=(p*t*r)/100;

    printf("\nSimple Interest is = %f",si);

    return 0;
}
