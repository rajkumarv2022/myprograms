// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    printf("enter Your Year");
    scanf("%d",&a);
    if(a%100==0)
    {
        printf("this is a leap Year");

    }
    else{

        if(a%4==0)
        printf("this is a  leap year");


    else

        if(a%400==0)
        printf("this is a leap year");

        else

            printf("This is not leap year");
    }
    return 0;
}
