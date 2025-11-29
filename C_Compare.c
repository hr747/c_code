#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s",&a,&b);
 strcmp(a,b);
 int v= strcmp(a,b);
 if(a<v)
 {
    printf("%s",a);
 }
 else{
    printf("%s",b);
 }
    return 0;
}