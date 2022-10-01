#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("Enter any number = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            flag++;


    }
    if(flag==2)
    {
       printf("Yes! It is a Prime Number!");
    }
    else
        printf("No! It is not a Prime Number!");
    return 0;




}
