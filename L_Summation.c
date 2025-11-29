#include<stdio.h>
long long int  rec (long long int a[],int n,int i){
    if(i==n)
    {
        return 0;
    }
    return a[i]+rec(a,n,i+1);
    
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int result=rec(a,n,0);
    printf("%lld",result);
    return 0;
}