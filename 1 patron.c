// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here

   int a,b,c;
   scanf("%d",&a);

   for(int i=1;i<=a;i++)
   {
   for(int j=1;j<=a;j++)
   {
       if(i==j||i+j==a+1)
       {
           printf("*");
       }
       else
       {
           printf(" ");
       }
   }
   printf("\n");
   }
    return 0;
}
