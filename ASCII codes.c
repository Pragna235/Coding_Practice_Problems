#include<stdio.h>
int main()
{
    char c;
    int i;
    for(i=0;i<=127;i++)
    {
        printf("Character for the ASCII code %d is %c",i,i);
        printf("\n");
    }
    return 0;
}
