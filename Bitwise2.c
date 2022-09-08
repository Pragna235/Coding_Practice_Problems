#include<stdio.h>
int main()
{
    int num, msb, bits;
    bits=(sizeof(int)*8);

    printf("\nEnter the number = ");
    scanf("%d",&num);

    msb=1 << (bits-1);

    if(msb&num)
        printf("\nThe Most Significant bit is set!");
    else
        printf("\nThe Most Significant bit is not set!");

    return 0;
}
