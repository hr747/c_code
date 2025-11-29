#include<stdio.h>
void pattran(int n)
   { int star=1,spac=n-1;
    for(int i=1;i<=n;i++)
    {for(int k=1;k<=spac;k++)
        {
            printf(" ");
        }
         for (int j=1;j<=star;j++)
        {
            printf("*");
        }
        star+=2;
        spac--;
        printf("\n");
       

    }
     return; 

}

int main()
{
int n;
scanf("%d",&n);
pattran(n);
    return 0;
}