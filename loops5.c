#include<stdio.h>
int main()
{
    int n,m,length;
    char num[50];
    printf("\nEnter a number = ");
    gets(num);

    length=strlen(num);

    m=num[0];
    num[0]=num[length-1];
    num[length-1]=m;

    printf("The number after first and last digits are swapped is = ");
    puts(num);

    return 0;

}
