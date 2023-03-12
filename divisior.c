// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    for(int c=1;c<=1000000;c++)
    {
   int b=a%c;
    if(b==0)
    {
        printf("\n%d",c);
    }
    }


    return 0;
}
