#include <stdio.h>
#include<stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
   int valu;
   scanf("%d",&valu);
   bool result=true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==valu){
                result=false;
                break;

            }
        }
    }
    if(result)
    {
        printf("will take number");
    }
    else{
        printf("will not take number");
    }

}