// Rreverse digit sum
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c=0,d,e,f;
    scanf("%d",&b);
    while(b!=0)
    {
        d=b%10;
        b=b/10;
        printf("%d",d);
        c=c+d;

    }
    printf("\n%d",c);


    return 0;
}
