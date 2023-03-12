// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int a,b=0;
   scanf("%d",&a);
   for(int i=a;i>0;i--)
   {
       for(int j=1;j<=a;j++)
       {
            if(j>=i)
            printf("%d",j);
             else
                printf(" ");
       }
          printf("\n");
   }

    return 0;
}
