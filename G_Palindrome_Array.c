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

  
int b=1;

    for(int i=0; i<n/2;i++)
    {
      if(ar[i]!=ar[n-1-i])  
        {
            b=0;
        break;
        }
    }
    if(b==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }

    
   
 
    return 0;
}