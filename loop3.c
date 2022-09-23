#include<stdio.h>
int main()
{
    int num,rem;
    int sum=0;
    printf("\nEnter any number = ");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("\nSum of digits in the given number is %d",sum);
    return 0;
}
