#include<stdio.h>
int main()
{
   long long int n;
    scanf("%lldd",&n);
   long long int b [n];
    for(int i=0; i<=n;i++)
   {
     scanf("%lld",&b[i]);
      
   }
   long long int sum= 0;

   for( int i=0;i<n;i++)
   {
    sum+=b[i];
   }
   if (sum <0)
   {
    sum=-sum;
   }
  
   printf("%lld",sum);

    return 0;
}