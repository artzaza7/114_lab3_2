#include<stdio.h>
int main()
{
    long long number;
    scanf("%lld",&number);
    if(number==1)
    {
        printf("1\n");
    }
    if(number%2==0&&number>1)
    {
        printf("%lld",number-1);
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