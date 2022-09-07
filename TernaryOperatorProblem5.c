#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter any character = ");
    scanf("%c",&ch);

    if( (ch>='A'&& ch<='Z')||(ch>='a' && ch<='z'))
        printf("\nIt is an alphabet");
    else
        printf("\nIt is not an alphabet");
    return 0;
}
