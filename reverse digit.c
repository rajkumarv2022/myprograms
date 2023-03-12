// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code her
    int a,d,m,s,r,s1,s2;
    printf("Enter your number");
    scanf("%d",&a);
    while(a>0)
    {
       d=a/10;
       m=a%10;
       s1=m;
       s2=s1;
       a=d;
       printf("%d",m);
    }



    return 0;
}
