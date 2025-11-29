#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=1*n;
    int spc=n-1;
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<=spc;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        star-=1;
        spc++;
    }
    return 0;
}