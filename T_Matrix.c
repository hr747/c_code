#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r;
    scanf("%d", &r);
    int a[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int pymari=0;
    int secend=0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (i == j)
                {
                    pymari+=a[i][j];
                }
                 if(i+j==r-1)
                {
                   secend +=a[i][j];
                }
            }
        }
    
 int rest=abs (pymari-secend);
  printf("%d",rest);
}