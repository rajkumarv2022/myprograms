#include <stdio.h>

int main() {
  int a,b,*p=&a,*q=&b;
  printf("Input the firat number");
  scanf("%d",&a);
  printf("\nInput the secind number");
  scanf("%d",&b);
  (*p>*q)?printf("\n%d is the maximum number.",*p):printf("\n%d is the maximum number.",*q);


    return 0;
}
