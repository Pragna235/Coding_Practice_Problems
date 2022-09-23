#include<stdio.h>
int main()
{
    int n=0;
    char c;
    printf("\nASCII values are : ");
    while(n<=127)
    {
        printf("ASCII value of %d = %c\n",n,n);
        n++;
    }
    return 0;
}
