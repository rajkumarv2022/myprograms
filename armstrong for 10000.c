// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int sum,count=1,rem,num;

   while(count<=1000)
   {
     num=count;
     num=0;
       while(num)
       {
           rem=num%10;
           num=num/10;
           sum=sum+(rem*rem*rem);

       }
         if(count==sum)
   {
       printf("%d",count);
   }
   count++;
   }

    return 0;
}
