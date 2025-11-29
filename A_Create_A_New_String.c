;#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001],t[10001];
    scanf("%s %s",&s,&t);
    int len_1 =strlen(s);
    int len_2=strlen(t);
    printf("%d %d\n%s %s",len_1,len_2,s,t);

    return 0;
}