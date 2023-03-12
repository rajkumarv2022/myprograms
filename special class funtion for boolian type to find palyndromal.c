// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
bool p(int);
int main() {
    // Write C code here
   int a;
   scanf("%d",&a);//121
    int s=p(a);
if(s==1)
{
    printf("Palindromal");
}
else
{
    printf("Not");
}
    return 0;
}
bool p(int a)
{
    int d,rev=0,copy=a;
    for(;a;a/=10)
    {
        d=a%10;
        rev=rev*10+d;
    }
    if(rev==copy&&copy>=0)
    return 1;
    else
    return 0;
}
