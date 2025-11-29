#include<stdio.h>
void love (int i,int n)
{
    if(i>n)
    {
        return;
    }
    
   printf("%d\n",i);
    love(i+1,n);
 
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    love(i,n);

    return 0;
}