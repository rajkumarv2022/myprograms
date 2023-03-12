#include<stdio.h>
int main()
{
    int a,b,c,f,sum=0;
    scanf("%d",&a);
 b=a;
  for(int i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    if(sum==b)
    printf("Strong number");
    else
    printf("Not strong Number");
    return 0;
}
