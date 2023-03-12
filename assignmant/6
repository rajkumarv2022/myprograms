#include <stdio.h>
int main()
{
int customerid,ptime;
char pp,dp;
printf("Enter the Customer id:");
scanf("%d",&customerid);
printf("Enter the pickuppoint:");
scanf(" %c",&pp);
printf("Enter the droppoint:");
scanf(" %c",&dp);
printf("Enter the pickup time:");
scanf("%d",&ptime);
int d=(dp-pp)*15;
int fare=0;
if(d>=5){
 fare+=100;
 d=d-5;
 fare+=d*10;
}
printf("Taxi is alloted for Customer %d from %c to %c at %d",customerid,pp,dp,ptime);
printf("\nCustomer %d Total Fare:Rs %d",customerid,fare);
return 0;
}
