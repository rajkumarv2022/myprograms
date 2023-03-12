#include<stdio.h>
int main()
{

    int a;
    printf("Enter Your Year");
    scanf("%d",&a);
    if(a%100==0||a%4==0||a%400==0)
    {


        printf("This Is a Leap Year");
            }


else{
    printf("This Not a Leap Year");
}
}
