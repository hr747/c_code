#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r=a/10;
    int b=a%10;
    if((b!=0&&r%b==0)||(r!=0&&b%r==0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);

//     int r= a / 10;     
//     int b = a % 10;    

   
//     if ((b != 0 && r% b == 0) || (r!= 0 && b % r == 0))
//      {
//         printf("YES\n");
//     }
//      else
//       {
//         printf("NO\n");
//     }

//     return 0;
// }