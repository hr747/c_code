#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=1;
    int spc=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=spc;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=star;j++)
        {
            printf("*");
        }

        //  exta line print bondho korer jonno  if bebothar kotha hoise
          if(i != n)        
        {
            printf("\n");
        }

        star+=2;
        spc--;
    }
    return 0;
}