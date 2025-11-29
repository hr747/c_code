#include <stdio.h>
int rec(long long int n)
{
    if (n == 1)
    {
        return 0;
    }
    int ans = 1 + rec(n / 2);
    return ans;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    int result = rec(n);
    printf("%d", result);
    return 0;
}