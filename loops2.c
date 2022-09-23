#include<stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    char strnum[50];
    long long int i,first,length,last,number;

    printf("\nEnter a number = ");
    scanf("%lld",&number);

    sprintf(strnum,"%lld",number);

    length=strlen(strnum);
    //printf("%d",length);

    last=number%10;
    first=number/pow(10,length-1);
    printf("\nFirst digit = %lld\nLast digit = %lld",first, last);
    return 0;

}


