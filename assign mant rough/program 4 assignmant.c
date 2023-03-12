#include <stdio.h>
int main()
{
int maths,physics,chemistry,i,max;
float a,b,c,cutoff1,cutoff2,cutoff3;
printf("\nEnter the Maths mark:");
scanf("%d",&maths);
printf("\nEnter the physics mark:");
scanf("%d",&physics);
printf("Enter the Chemistry mark:");
scanf("%d",&chemistry);
a=(physics/2)+(chemistry/2);
cutoff1=(maths+a)/2;
printf("The Cutoff1 is %f",cutoff1);
printf("\nEnter the Maths mark:");
scanf("%d",&maths);
printf("\nEnter the physics mark:");
scanf("%d",&physics);
printf("Enter the Chemistry mark:");
scanf("%d",&chemistry);
b=(physics/2)+(chemistry/2);
cutoff2=(maths+b)/2;
printf("The Cutoff2 is %f",cutoff2);
printf("\nEnter the Maths mark:");
scanf("%d",&maths);
printf("\nEnter the physics mark:");
scanf("%d",&physics);
printf("Enter the Chemistry mark:");
scanf("%d",&chemistry);
c=(physics/2)+(chemistry/2);
cutoff3=(maths+c)/2;
printf("The Cutoff3 is %f",cutoff3);
if(cutoff1>cutoff2&&cutoff1>cutoff3)
printf("\nCutoff1 is greater");
else if(cutoff2>cutoff1&&cutoff2>cutoff3)
printf("\nCutoff2 is greater");
else
printf("\nCutoff3 is greater");
 return 0;
}
