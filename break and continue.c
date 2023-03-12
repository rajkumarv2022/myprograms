// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    for(a=1;a<=10;a++)
    {
        if(a==9)
        {
            break;
        }
        if(a==4)
        {
            continue;
        }
        printf("%d\n",a);
    }


    return 0;
}
