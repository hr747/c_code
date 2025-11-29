#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<=a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos =1;
    int man=ar[0];
    for(int i=0;i<a;i++)
    {
        if(ar[i]<man)
       {
         man=ar[i];
        pos=i+1;
       }

    }
    printf("%d ",man);
    printf("%d",pos);
    return 0;
}