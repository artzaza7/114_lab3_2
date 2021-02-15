#include<stdio.h>
int main()
{
    long long number;
    scanf("%lld",&number);
    long long save=number;
    if(save==0||save==1)
    {
        printf("%lld",save);
    }
    for(long long i=2;i<=number&&number!=0&&number!=1;i++)
    {
        while (save%i==0)
        {
            save=save-1;
        }
    }
    if(save!=0&&save!=1)
    {
        printf("%lld",save+1);
    }
    return 0;
}