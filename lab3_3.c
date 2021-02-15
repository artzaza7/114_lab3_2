#include<stdio.h>
int main()
{
    int number,i=2;
    scanf("%d",&number);
    while (number>0)
    {
        if(number%i==0)
        {
            printf("%d ",i);
            number=number/i;
            printf("\n");
        }
        else
        {
            i++;
        }
        if(number==1)
        {
            printf("0");
            break;
        }
    }

    
    return 0;
}