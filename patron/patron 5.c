// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int a,b=0;
   scanf("%d",&a);
  for(int i=1;i<=2*a;i++)
  {
       if(i<=a)
       {
      for(int j=1;j<=i;j++)
      {
          printf("%d ",j);
      }
      printf("\n");
       }

     else
     {
        // printf("else");
         for(i;i>0;i--)
         {
             for(int j=1;j<=i-1;j++)

             {
                 printf("%d ",j);
             }
             printf("\n");
         }
     break;
  }
  }

    return 0;
}
