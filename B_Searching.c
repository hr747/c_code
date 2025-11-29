#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x;
    scanf("%d",&x);

    int flag=0;

    for(int i=0; i<n;i++)
    {
    
    
        if(ar[i]==x)
        {
         flag=1;
            printf("%d",i);
            break; 
        }
          
    }
    if(flag==0)
    {
        printf("-1");
    }
    
    return 0;
}