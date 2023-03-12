// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("Enter three number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
     if(a>c)
     {
         printf("%d is bgg",a);
     }
     else
     {
         printf("%d is big",c);
     }
    }
    else
    {
        if(b>c)
        {
            printf("%d is bigg",b);
        }
        else
        {
            printf("%d is bigg",c);
        }
    }


    return 0;
}
