#include <stdio.h>

int sq(int);
int rev(int);
int main()

{
    int a,b,temp,c=0,d,h;
    scanf("%d",&a);
    temp=a;
    temp=a;
    int e=sq(a);//144

    int f=rev(e);//441

    int g=rev(a);
   // printf("%d",g);//21
    int i=sq(g);
   // printf("%d",i);
    if(i==f)
    {
printf("\nAdam number");

    }
    else
        {
            printf("Not");

    }

    return 0;
}
int sq(int a)

{

    return a*a;
}
int rev(int h)
{
    int c=0;
while(h)
{
   int b=h%10;
   c=c*10+b;
    h=h/10;

}
return c;
}

