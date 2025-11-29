#include<stdio.h>
int main()
{int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // colam er jonn print
//     int colam;
//     scanf("%d",&colam);

//      for(int i=0;i<r;i++)
//     {
    
//    printf("%d ",a[i][colam]);

//     }
    // row
     int  row;
    scanf("%d",&row);

     for(int i=0;i<c;i++)
    {
    
   printf("%d ",a[row][i]);

    }
    
    
    return 0;
}