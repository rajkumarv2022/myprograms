#include<stdio.h>
//2d array multipication
int main(){

   int m1,n1,m,n,a[100][100],b[100][100],d[100][200],s=0;
   scanf("%d%d%d%d",&m,&n,&m1,&n1);
   if(n==m1)
   {
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
       for(int j=0;j<m;j++)
       {
           for(int k=0;k<n1;k++)
           {
     s=s+a[i][k]*b[k][j];

           }
            d[i][j]=s;
            s=0;
       }
   }
    for(int i=0;i<m;i++)
   {
       for(int j=0;j<n1;j++)
       {
       printf("%d ",d[i][j]);
       }
       printf("\n");
   }

   }
   else
   printf("Invalid operation");

    return 0;

}
