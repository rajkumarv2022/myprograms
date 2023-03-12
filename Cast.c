#include<stdio.h>
int main(){

int q;
printf("enter your quantaty");
scanf("%d",&q);
float c,d,t;
printf("\nEnter your cast and discount");
scanf(" %f %f",&c,&d);
t=(c-d)*q;
printf("%f",t);
return 0;


}
