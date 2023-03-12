// to find sum of rows and coliumn in 2d array
#include <stdio.h>

int main() {
    // to find sum of rows and coliumn
    int r,c,sum=0,n=0;
    printf("Enter your rows and collumn");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

           sum=sum+arr[i][j];

        }
          n++;
    printf("sum of %d row = %d\n",n,sum);
    sum=0;
    }
    n=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            sum=sum+arr[j][i];

        }
         n++;
        printf("\nsum of %d colum = %d",n,sum);
        sum=0;
    }

    return 0;
}
