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


    for( int i=0,z=n-1;i<z;i++,z--)
    {
        int tmp = ar[i];
       ar[i]=ar[z];
       ar[z]=tmp; 
    }
      for( int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}