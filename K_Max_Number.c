#include<stdio.h>
long long int rec (long long int a[],long long int n)
{
    if(n==1)
    {
        return a[0] ;
    }
     long long int result =rec(a,n-1);
     if (result<a[n-1])
     {
        return a[n-1];
     }
     else {
        return result;
     }
}
int main()
{
 long long int n;
 scanf("%lld",&n);
 long long int a[n];
 for (int i=0;i<n;i++)
 {
    scanf("%lld",&a[i]);
 }
  long long int z=rec(a,n);
  printf("%lld",z);
    return 0;
}