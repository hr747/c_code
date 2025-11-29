#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int z=0,x=n-1;
    for(int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            printf("%d ",a[z]);
            z++;
        }
        else{
            printf("%d ",a[x]);
            x--;
        }
    }

    return 0;
}