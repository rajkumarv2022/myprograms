#include<stdio.h>
int main()

{
int i,j,k,u;
scanf("%d",&u);
for(j=1;j<=u;j++)
{
for(i=5;i>=j;i--)
{
printf(" ");
}
for(k=1;k<=j;k++)
{

  printf("* ");
}
printf("\n");

}
}
