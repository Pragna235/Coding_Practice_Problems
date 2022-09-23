#include<stdio.h>
int main()
{
    int num,i,rev=0,rem;
    printf("\nEnter any number = ");
    scanf("%d",&num);

    while(num>0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        switch(rem)
        {
            case 0:
                  printf(" Zero");
                  break;
            case 1:
                printf(" One");
                break;
            case 2:
                printf(" Two");
                break;
            case 3:
                printf(" Three");
                break;
            case 4:
                printf(" Four");
                break;
            case 5:
                printf(" Five");
                break;
            case 6:
                printf(" One");
                break;
            case 7:
                printf(" Seven");
                break;
            case 8:
                printf(" Eight");
                break;
            case 9:
                printf(" Nine");
                break;
            default:
                printf(" Enter digits from 0-9");
                break;



        }
        rev=rev/10;
    }
    return 0;


}
