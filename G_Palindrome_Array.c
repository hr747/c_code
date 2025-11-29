#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int z[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        z[i]=a[i];
    }
    int x=0;
    int y=n-1;
    while (x<y)
    {
        int tmp=a[x];
        a[x]=a[y];
        a[y]=tmp;
        x++;
        y--;
        
    } int c=1;

    for(int i=0;i<n;i++)
    {
            if (a[i]!=z[i])
    {
        c=0;
        break;
    }
    }
    if (c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



    
    
    
    return 0;
}

// shortcut


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for( int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
      
//     }

  
// int b=1;

//     for(int i=0; i<n/2;i++)
//     {
//       if(ar[i]!=ar[n-1-i])  
//         {
//             b=0;
//         break;
//         }
//     }
//     if(b==1)
//     {
//         printf("YES");
//     }
//     else 
//     {
//         printf("NO");
//     }

    
   
 
//     return 0;
// }