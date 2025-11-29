#include<stdio.h>
void even(int a[],int i)
{if(i<0)
    {
        return;
    }
    if(i%2==0)
    {
       printf("%d ",a[i]);
    }
    
    even(a,i-1); 
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    even(a,n-1);
    return 0;
}