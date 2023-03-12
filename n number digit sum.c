// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,m=0,sum=0,d,s,s2;
    printf("Enter your number which is "
           "find to digit sum");
    scanf("%d",&a);
    while(a>0)
   { s=a/10;
    s2=a%10;
    sum+=s2;
    a=s;}
    printf("%d",sum);

    return 0;
}
