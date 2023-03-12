// Online C compiler to run C program online
#include <stdio.h>

int main() {

   int a;
   scanf("%d",&a);
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<=i;j++)
      {
          printf(" ");
      }
       for(int k=i;k<a;k++)
       {
           printf("* ");
       }
     printf("\n");

  }

   return 0;
}
