#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;


        printf("%d",b);
    }
}
