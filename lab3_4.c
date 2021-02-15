#include<stdio.h>
int main()
{
    long long number,k;
    scanf("%lld",&number);
    long long save=number;
    if(number==1||number==0||number==2)
    {
        printf("%lld",number);
    }
    for(long long i=2;i<=number;i++)
    {
        while ((save%i)==0)
        {
            save=save-1;
        }
    }
    for(long long i=2;i<=save+1;i++)
    {
        while ((save%i)==0)
        {
            save=save-1;
        }
    }
    printf("%lld",save+1);
    return 0;
}