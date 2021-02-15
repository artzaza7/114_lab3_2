#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int save=number/2;
    int give;
    for(int i=2;i<=save;i++)
    {
        if(number%i==0)
        {
            printf("%d",number-1);
            give=1;
            break;
        }
    }
    if (give!=1)
    {
        printf("%d",number);
    }
    return 0;
}