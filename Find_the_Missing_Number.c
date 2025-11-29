#include<stdio.h>
int main()
{int t;
    scanf("%d",&t);
    while (t--)
    {
    
    long long int m,a,b,c;
    scanf("%lld %lld %lld %lld",&m,&a,&b,&c );
   long long int mal=a*b*c;
    if (m%mal==0)
    {
        printf("%lld\n",m/mal);
    }
    else
    {
        printf("-1\n");
    }
}
    return 0;
}