#include<stdio.h>
int main()
{
    long long number;
    scanf("%lld",&number);
    long long save=number;
    for(int i=2;i<=number;i++)
    {
        while (save%i==0)
        {
            save=save-1;
        }
    }
    printf("%lld",save+1);
    
    return 0;
}