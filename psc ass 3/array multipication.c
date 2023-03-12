// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int m,n,m1,n1,a[100][100],b[100][100],c[100][100],s=0;
   scanf("%d%d%d%d",&m,&n,&m1,&n1);
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(int i=0;i<m1;i++)
   {
       for(int j=0;j<n1;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   for(int i=0;i<m*n1;i++)
   {
       for(int j=0;j<n;j++)
       {
           for(int k=0;k<n1;k++)
           {
              s=s+a[i][k]*b[k][j];
           }
           c[i][j]=s;
              s=0;
       }

   }
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
         printf("%d ",c[i][j]);
       }
       printf("\n");
   }

    return 0;
}
