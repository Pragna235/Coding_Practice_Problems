#include<stdio.h>
int main()
{
    long int year;
    printf("\nEnter any year = ");
    scanf("%ld",&year);

    if((year%4==0 && year%100!=0) || year%400==0)
        printf("\nleap year");
    else
        printf("\nNot a leap year");
    return 0;

}
