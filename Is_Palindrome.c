#include <stdio.h>
#include <string.h>
int is_palindrome(char a[])
{
    int len = strlen(a);

    for (int i = 0; i < len / 2; i++)
    {
        if (a[i] != a[len - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    char a[10001];
    scanf("%s", &a);
    int re = is_palindrome(a);
    if (re == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}