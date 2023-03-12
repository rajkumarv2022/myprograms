// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here

   int a,b,c;
   scanf("%d",&a);

   for(int i=1;i<=a;i++)
   {
       for(int j=a;j>=i;j--)
       {
           printf(" ");
       }


         for(int j=1;j<=i;j++)
         {
             printf("* ");
         }
     printf("\n");
   }

    return 0;
}
