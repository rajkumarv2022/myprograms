// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
    int a,d,m,c,s=0,r,g;
    printf("enter your number");
    scanf("%d",&a);


    r=a;
    while(a>0)
    {
        d=a/10;
        m=a%10;
        c=m*m*m;
        s+=c;
         a=d;
    }
    if(s==r){
    printf("%d is a armstrong number",s);}
    else
    {
        printf("not amrstrong number");
    }
    return 0;
}
