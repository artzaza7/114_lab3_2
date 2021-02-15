#include<stdio.h>
int main()
{
    long long number;
    scanf("%lld",&number);
    if(number==1)
    {
        printf("1");
    }
    else if(number==0)
    {
        printf("0");
    }
    else if(number%2==0)
    {
        if(number%5!=0&&number<10)
        {
            printf("%lld",number-1);
        }
        else
        {
            number=number-2;
            printf("%lld",number-1);
        }
    }
    else
    {
        int save=number/2;
        for(int i=3;i<=save;i++)
        {
            if(number%i!=0)
            {
                printf("%lld",number);
                break;
            }
        }
    }
    return 0;
}