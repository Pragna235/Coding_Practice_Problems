#include<stdio.h>
#include<math.h>
int main()
{
    double p, t, r, amount, CI;
    printf("\nEnter the principal amount = ");
    scanf("%lf",&p);
    printf("\nEnter the time period = ");
    scanf("%lf",&t);
    printf("\nEnter the rate of interest = ");
    scanf("%lf",&r);

    amount=p*pow((1+(r/100)),t);
    CI=amount-p;
    printf("\nCompound Interest = %lf",CI);

    return 0;
}
