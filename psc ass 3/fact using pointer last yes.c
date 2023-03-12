#include <stdio.h>

int main() {
  int a,*p=&a,f=1;
  printf("Input the firat number");
  scanf("%d",&a);
  for(int i=*p;i>0;i--)
  {
    f=f*i;
  }
  printf("The factorial %d is %d",a,f);

    return 0;
}
