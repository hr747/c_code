#include<stdio.h>
#include<string.h>
int main()
{
char n[10000001];

    int fre[26]={0};
    scanf("%s",n);

    for(int i=0;n[i]!='\0';i++)
    {
        int val=n[i]-'a';
    fre[val]++;
    }
    

    for(int i=0;i<26;i)
    { if(fre[i]>0)
        {
        printf("%c : %d\n",i+'a',fre[i]);
    }
    }
    


    return 0;
}