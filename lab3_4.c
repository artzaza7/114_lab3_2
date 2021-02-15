#include<stdio.h>
int main()
{
    int number;
    int fire=2;
    scanf("%d",&number);
    while (number>=0)
    {
        if(number%fire==0&&fire%2!=0&&fire%3!=0)
        {
            printf("%d",fire);
            break;
        }
        else
        {
            fire++;
        }
    }
    
    return 0;
}