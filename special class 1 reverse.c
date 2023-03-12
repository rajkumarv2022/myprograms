// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
 int a,b,temp,reverse=0;
 scanf("%d",&a);
 temp=a;
 while(a)
 {
     b=a%10;
     reverse=reverse*10+b;
     a=a/10;
 }
 printf("%d",reverse);

    return 0;
}
