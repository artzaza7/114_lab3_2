#include<stdio.h>
int main()
{
    int number,count=0,give=1;
    scanf("%d",&number);
    int save=number;
    if(number==1||number==0)
    {
        int u=number;
        printf("%d is not a Lucky Number.",u);
    }
    for(int i=2;number>1;i++)
    {
        if(number%i==0)
        {
            if(give==i)
                break;
            number=number/i;
            give=i;
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