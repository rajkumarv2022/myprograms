#include<stdio.h>
int main()
{
    int a;
  lable:

    scanf("%d",&a);
    int b,c;

    for(a;a!=0;)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);


    }
    printf("\nif you want to continue press 1");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
    goto lable;

}
else
{
    printf("\nThank You");
}

return 0;
}





