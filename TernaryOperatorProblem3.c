#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number = ");
    scanf("%d",&a);
    if(a%2==0)
        printf("\neven");
    else
        printf("\nodd");
    return 0;
}
