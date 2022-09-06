#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter any three numbers = ");
    scanf("%d %d %d",&a, &b, &c);

    if(a>b && a>c)
        printf("\n%d is the greatest",a);
    if(b>c && b>a)
        printf("\n%d is the greatest",b);
    if(c>a && c>b)
        printf("\n%d is the greatest",c);
    return 0;
}
