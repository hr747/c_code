#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    // string er bilting funcation er madhome copy kora 
    strcpy(a,b);

// nije lojick diye copy kora
    
    // int lent = strlen(b);
    // for(int i=0;i<=lent;i++)
    // {
    //     a[i]=b[i];
    // }
    printf("%s %s",a,b);
    return 0;
}