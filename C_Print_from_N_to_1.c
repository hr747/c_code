#include<stdio.h>
void love (int i,int n)
{
    if(i>n)
    {
        return;
    }
    
  
    love(i+1,n);
   if(i==1)
        printf("%d", i); 
    else
        printf("%d ", i);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    love(i,n);

    return 0;
}