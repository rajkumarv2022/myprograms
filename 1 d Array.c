#include<stdio.h>
int main()
{
int a   ,b,c[100];
printf("Enter your Limit");
scanf("%d",&b);
for(a=0;a<=b;a++)
{
printf("Enter your Value");
scanf("%d",&c[a]);

}
for(a=0;a<=b;a++)
{



printf("%d",c[a]);
}
return 0;
}
