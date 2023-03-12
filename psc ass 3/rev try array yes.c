// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a[100],b[100],c,d,e,f;
   scanf("%d %d",&c,&d);
   f=c;

   for(int i=0;i<c;i++)
   {
       scanf("%d",&a[i]);
   }
   f=a[0];
  // printf("f%d",f);
  for(int i=0;i<d;i++)
  {
      for(int j=0;j<c;j++)
      {
          if(j==c-1)
          a[j]=f;
          else
          a[j]=a[j+1];//2//3

      }
      f=a[0];
  }
  for(int i=0;i<c;i++)
   {
      printf("%d ",a[i]);
   }
    return 0;
}
