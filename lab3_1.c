#include<stdio.h>
int main()
{
    int num[5][4];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    int sum[5],max=0,save,all=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            all=all+num[i][j];
        }
        sum[i]=all;
        all=0;
    }
    for(int i=0;i<5;i++)
    {
        if(sum[i]>max)
        {
            save=i;
            max=sum[i];
        }
    }
    printf("%d %d",save+1,max);
    return 0;
}