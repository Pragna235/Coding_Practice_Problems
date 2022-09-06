#include<stdio.h>
int main()
{
    float mark1, mark2, mark3, mark4, mark5, total, average, percentage;

    printf("\nEnter all the 5 marks (each subject mark within 120)= ");
    scanf("%f %f %f %f %f",&mark1, &mark2, &mark3, &mark4, &mark5);

    total=mark1+mark2+mark3+mark4+mark5;
    average=total/5;
    percentage=(total/600)*100;

    printf("\ntotal = %f",total);
    printf("\naverage = %f",average);
    printf("\npercentage = %f",percentage);

    return 0;

}
