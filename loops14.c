#include<stdio.h>
#include <math.h>
int main()
{
    int num,rem,sum=0,m,cube;
    printf("Enter any number = ");
    scanf("%d",&num);
    m=num;

    while(num!=0)
    {
        rem=num%10;

        cube=pow(rem,3);

        num=num/10;

        sum+=cube;

    }
    if(m==sum)
        printf("Yes! It is an Armstrong Number!");
    else
        printf("No! It is not an Armstrong Number!");
    return 0;
}

