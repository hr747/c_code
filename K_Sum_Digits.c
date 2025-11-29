#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
char b[a+1];
scanf("%s",&b);

int c=0;
for(int i=0;i<a;i++)
{
    c+=b[i]-'0';
}
printf("%d",c);

    return 0;
}