#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int z;
    scanf("%d",&z);

    if(a[z-1] == 0)
    {
        a[z-1] = 1;
    } 
    else
    {
        a[z-1] = 0;
    }
    

  for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }



    return 0;
    
}