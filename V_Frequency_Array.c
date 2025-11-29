#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d %d",&n,&b);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int fre[b];
    for (int i=0;i<=b;i++)
    {
        fre [i]=0;
    }

    for(int i=0;i<n;i++)
    {
        int val=a[i];
    fre[val]++;
    }
    

    for(int i=1;i<=b;i++)
    {
        printf("%d\n",fre[i]);
    }
    


    return 0;
}