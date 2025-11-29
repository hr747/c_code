#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b[n];

        for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int sum=0;
        for(int i=0;i<n;i++)
    {
      sum = sum + b[i] ;
    }
    printf("%d",sum);


    return 0;
}