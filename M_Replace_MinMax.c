#include<stdio.h>
int main()
{
int n;
    scanf("%d",&n);
    int ar[n];
    for( int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
int x=0;
int y=0;

    for(int i=0; i<n; i++)
    {
     if (ar[i]<ar[x])
     {
        x=i;

     }
     else if (ar[i]>ar[y])
     {
        y=i;
     }
    }
    int tmp=ar[x];
    ar[x]=ar[y];
    ar[y]=tmp;


      for( int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}