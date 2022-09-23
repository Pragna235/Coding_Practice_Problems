//LOops can also be used!
#include<stdio.h>
int main()
{
    long long int n,p=0;

    printf("\nEnter a natural number = ");
    scanf("%lld",&n);
    p=n;
    n=n*(n+1)/2;
    printf("\nSum of the natural numbers upto %lld is %lld",p,n);
    return 0;
}
