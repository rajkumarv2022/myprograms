// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int num,temp,rem,count=1,fact=1,sum=0;
  scanf("%d",&num);
  temp=num;
  while(num!=0)
  {
     rem= num%10;

      while(count<=rem)
      {
          fact=fact*count;


           count++;
      }
      sum=sum+fact;
      //printf("\n%d",sum);
      fact=1;
      count=1;
      num=num/10;
  }
  if()
  printf("\n%d",sum);
    return 0;
}
