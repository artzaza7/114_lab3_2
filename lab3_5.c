#include<stdio.h>
int main()
{
    int number,count=0,give=1;
    scanf("%d",&number);
    int save=number;
    for(int i=2;number>1;i++)
    {
        if(number%i==0)
        {
            if(give==i)
                break;
            number=number/i;
            give=i;
            i=1;
            count++;
        }
    }
    if(count==3)
    {
        printf("%d is a Lucky Number.",save);
    }
    else
    {
        printf("%d is not a Lucky Number.",save);
    }
    return 0;
}