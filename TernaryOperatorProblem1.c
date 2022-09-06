#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the two numbers = ");
    scanf("%d %d",&a, &b);

    if(a>b)
    {
        printf("\n%d is greater than %d",a,b);
    }
    else
        printf("\n%d is greater than %d",b,a);
    return 0;
}
