#include<stdio.h>
int main()
{
    int number,check=2,count=0;
    scanf("%d",&number);
    int save = number;
    while (number>=0)
    {
        if(count==3)
        {
            break;
        }
        if(number%check==0)
        {
            number=number/check;
            check++;
            count++;
        }
    }
    if (count==3)
    {
        printf("%d is a Lucky Number.",save);
    }
    else
    {
        printf("%d is not a Lucky Number.",save);
    }
    return 0;
}