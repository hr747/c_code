// #include<stdio.h>
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     if ((x % 40 == 0) || (x % 70 == 0) || (x % 440 == 0) || (x % 470 == 0) ||
//     (x % 740 == 0) || (x % 770 == 0) || (x % 4440 == 0) || (x % 4470 == 0) ||
//     (x % 4740 == 0) || (x % 4770 == 0) || (x % 7440 == 0) || (x % 7470 == 0) ||
//     (x % 7740 == 0) || (x % 7770 == 0))
//     printf("YES\n");
// else
//     printf("NO\n");

//     return 0;
// }

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x % 4 == 0 && x % 7)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}