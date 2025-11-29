#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    fgets(a,1001,stdin);
    for(int i=0;a[i]!='\0';i++)
    {if (a[i]=='\\')
        {
            break;
        }
        printf("%c",a[i]);
    }

    return 0;
}