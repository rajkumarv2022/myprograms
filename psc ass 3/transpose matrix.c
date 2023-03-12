// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int a[100][100],b,c;
   scanf("%d%d",&b,&c);
   for(int i=0;i<b;i++)
   {
       for(int j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(int i=0;i<c;i++)
   {
       for(int j=0;j<b;j++)
       {
           printf("%d ",a[j][i]);
       }
       printf("\n");
   }
    return 0;
}
