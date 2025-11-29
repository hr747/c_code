#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000001];
    scanf("%s",a);
    int len= strlen(a);
    int z=0;
    for(int i=0;i<len;i++)
    {
        z+=a[i]-48;
        
        
    }
    printf("%d",z);
    
    return 0;
}

