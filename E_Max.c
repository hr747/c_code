#include<stdio.h>
int main()
{
    int a;

    scanf("%d",&a);
    int max = 0;
    for( int i=1; i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        if(max<b)
        {
            max=b;
        }
    }
    printf("%d",max);
    return 0;
}