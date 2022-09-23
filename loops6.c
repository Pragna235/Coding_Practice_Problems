#include<stdio.h>
int main()
{
    int num,rem,rev=0,original;
    printf("\nEnter a number = ");
    scanf("%d",&num);

    original=num;

    while(num>0)
    {
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }

    if(original == rev)
        printf("\nGiven number is a Palindrome!");
    else
        printf("\nGiven number is not a Palindrome!");

    return 0;
}
