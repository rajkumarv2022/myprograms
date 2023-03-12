#include <stdio.h>
int main()

{
    int a,s,sq,sq1,rev1=0,rev2=0,temp,b1,b2;
    scanf("%d",&a);
    temp=a;
    sq=a*a;//144
    while(sq)//144
    {
        b1=sq%10;//
        rev1=rev1*10+b1;
        sq=sq/10;
    }
    while(a)
    {
        b2=a%10;
        rev2=rev2*10+b2;
        a=a/10;
    }
    printf("%d",rev2);
    s=rev2*rev2;
    printf("\n%d\n%d",s,rev1);

if(s==rev1)
{
    printf("Adam number");
}
else
{
    printf("Not");
}



return 0;
}
