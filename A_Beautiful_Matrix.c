#include <stdio.h>
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int row, colam;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {

                row = i;
                colam = j;
            }
        }
    }

    int result = abs(row - 2) + abs(colam - 2);
    printf("%d", result);

    return 0;
}