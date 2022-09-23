#include<stdio.h>
int main()
{
    int n,m,p=1,rem;
    printf("\nEnter a number = ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        p=p*rem;
        n=n/10;
    }
    printf("Product of the digits in the given number is %d",p);
    return 0;
}
