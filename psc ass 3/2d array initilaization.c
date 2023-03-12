//  2d array input and output
#include <stdio.h>

int main()
{
       /* 1) Initialization

       */
       int a[2][3] = {{1,2,3},{4,5,6}}; //Initialization
       for(int i=0;i<2;i++)
       {
           for(int j=0;j<3;j++)
           {
           printf("%d ",a[i][j]);
           }
           printf("\n");
       }



    return 0;
}
