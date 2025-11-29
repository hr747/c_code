#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=n;i>= x+1 ;i--)
    {
        ar[i]= ar[i-1];
    }

    ar[x]=y;

    for (int i=0; i<=n;i++)
    {
        printf("%d ",ar[i]);

    }
    return 0;
}