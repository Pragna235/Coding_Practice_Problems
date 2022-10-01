#include<stdio.h>
int main()
{
    long int num,power,m;
    printf("Enter any number = ");
    scanf("%ld",&num);
    printf("Enter the power of number = ");
    scanf("%ld",&power);
    m=num;
    for(int i=0;i<power-1;i++)
    {
        num=num*m;

    }
    printf("%ld power %ld is %ld",m,power,num);
    return 0;
}
