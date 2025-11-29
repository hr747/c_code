#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
  
        for (int i=0;i<=n;i++)
        {
               scanf("%d ",&ar[i]);
        }
       
      int x=0;
    int y=0;
    for (int i=0;i<n;i++)
    {
     if (ar[i]<0)
    { x+=ar[i];
    }
    else if (ar[i]>0)
    {
        y+=ar[i];
    }
        }
        
printf("%d ",y);
printf("%d ",x);
    return 0;
}