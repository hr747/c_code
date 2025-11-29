#include <stdio.h>
 int main() 
 { int n;
     scanf("%d", &n); 

    //  part 1


     int z = (n+1)/2+5;
     for (int i = 0; i < z; i++)
{
    int spc = z - i - 1;
    int star = 2 * i + 1;
    for (int k = 0; k < spc; k++)
    {
        printf(" ");
    }
    for (int j = 0; j < star; j++)
    {
        printf("*");
    }
    printf("\n");
}

// part 2


int colam = n;

int row = 5;
int a = z - (colam / 2) - 1;

for (int i = 0; i < row; i++)
{

    for (int k = 0; k < a; k++)
    {
        printf(" ");
    }
    for (int j = 0; j < colam; j++)
    {
        printf("*");
    }
    printf("\n");

}

return 0;

 }

