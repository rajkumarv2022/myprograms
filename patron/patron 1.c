// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int a;
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=a;j++)
       {
           printf("%d",i);
       }
       printf("\n");
   }

    return 0;
}
