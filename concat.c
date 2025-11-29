#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    // bilting funcation
    strcat(a,b);

    // logick diye kora


    // int len= strlen(b);
    //  int len_c=strlen(a);

    // for(int i=0;i<=len;i++)
    // {
    //     a[i+len_c]=b[i];
    // }
    printf("%s %s",a,b);
    return 0;
}