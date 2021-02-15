#include<stdio.h>
int main()
{
    int number,i=2;
    scanf("%d",&number);
    if(number==1)
        printf("%d\n",number);
    while(number>1)
    {
        while(number%i==0)
        {
            printf("%d\n",i);
            number=number/i;
        }
            i++;
    }
    printf("0");
    return 0;
}