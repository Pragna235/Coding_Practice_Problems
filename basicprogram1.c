#include<stdio.h>
int main()
{
    int days,rem;
    printf("\nEnter the number of days = ");
    scanf("%d",&days);

    if(days>=365)
    {
        printf("\nyears = %d",days/365);
    }
    else
        printf("\nyears = 0");

    if((rem=days%365)>=7)
        {
            printf("\nweeks = %d",rem/7);

        }
    else
        printf("\nweeks = 0");
    if(rem%7 > 0)
        printf("\ndays = %d",rem%7);
    else
        printf("\ndays = 0 ");

                return 0;

}
