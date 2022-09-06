#include<stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("\nEnter the two angles of triangle = ");
    scanf("%f %f",&angle1, &angle2);

    angle3=180.00-(angle1+angle2);

    printf("\nThird angle of the triangle is = %f",angle3);

    return 0;
}
