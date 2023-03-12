// 2d array declaration
#include <stdio.h>

int main() {
    /*
       2) Declaration
       */
       int r,c;
       printf("\nEnter your rows and column :");
       scanf("%d %d",&r,&c);
       int a[r][c];
       for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {
                 printf("a[%d][%dj",i,j);
                 scanf("%d",&a[i][j]);
             }
         }
    for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {

                 printf(" %d ",a[i][j]);
             }
             printf("\n");
         }

    return 0;
}
