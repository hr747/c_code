#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=2*n-1;
    int spc=n;
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
        star-=2;
        spc++;
    }
    return 0;
}