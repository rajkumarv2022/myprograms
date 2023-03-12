// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a,b,c,d;
   scanf("%d",&a);
   for(int i=0;i<a;i++)
   {
       for(int k=i;k<a-1;k++)//
       {
           printf("-");
       }
       for(int j=0;j<=i;j++)
       {
          if(j==0||j==i+)
           printf("1 ");
           else
           printf("0 ");
       }
       printf("\n");
   }

    return 0;
}
