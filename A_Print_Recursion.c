#include<stdio.h>
void love (int n)
{if(n==0)
    return;
   
    love(n-1);
 printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    love(n);

    return 0;
}