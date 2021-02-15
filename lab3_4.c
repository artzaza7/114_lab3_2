#include<stdio.h>
int main()
{
    long long number,k;
    scanf("%lld",&number);
    long long save=number;
    int flag=0;
    if(number==1||number==0||number==2)
    {
        printf("%lld",number);
    }
    for(long long i=2;i<=number;i++)
    {
        if(save%i==0)
        {
            save=save-1;
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%lld",save+1);
    }
    else
    {
        printf("%lld",number);
    }
    return 0;
}