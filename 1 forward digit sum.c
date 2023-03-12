// Rreverse digit sum
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,e=0,d,c,f;
    scanf("%d",&a);


    do
    {
        b=a%10;
        a=a/10;
        e=e+b;



    }
    while(a!=0);
    printf("%d",e);


    return 0;
}
