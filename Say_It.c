#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<=n;i++)
    { 
     scanf("%d",b[i]);
    }
    int a=0;
    for(int i=0;i<n;i++)
    {
        a=i+1;
        printf("%d. I Want More Assignments\n",a);
    }
    

    return 0;
}