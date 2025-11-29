#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int spc = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= spc; k++)
        {
            printf(" ");
        }
        for (int j = star; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        star++;
        spc--;
    }
    return 0;
}