#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
}

int m;
scanf("%d",&m);
 int b[m];
 for(int i=0;i<m;i++)
 {
 scanf("%d",&b[i]);
 }

 int e [n+m];
 for(int i=0;i<n;i++)
 {
 e[i]=a[i];
 }
 
 for(int i=0;i<m;i++)
 {
 e[i+n]=b[i];
 }

// cood a vul ase tik korte hobe
 
 



 for(int i=0;i<n+m;i++)
 {
 printf("%d ",e[i]);
 }
 return 0;
}