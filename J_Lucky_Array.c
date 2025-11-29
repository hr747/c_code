#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mini = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (mini > a[i])
        {
            mini = a[i];
        }
    }
    int fre=0;
    for (int i=0;i<n;i++)
    {
        if (mini==a[i])
        {
            fre++;
        }
    }
    if (fre %2==1)
    {
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }

    return 0;
}