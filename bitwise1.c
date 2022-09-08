#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the number = ");
    scanf("%d",&num);

    if(num&1)
        printf("\nThe Least Significant number is set!");
    else
        printf("\nThe Least Significant number is not set!");

    return 0;
}
