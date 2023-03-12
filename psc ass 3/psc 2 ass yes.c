// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int reverse();
int square();
int main() {
    // Write C code here
    int num;
   printf("Enter your number");
    scanf("%d",&num);
    int c=square(num);

  int d=reverse(c);

  int e=reverse(num);

  int f=square(e);

 if(d==f)
 {
   printf("Adam number");
 }
  else
  printf("Not an adam number");

    return 0;
}
int square(int g)
{
    int k=pow(g,2);
    return k;
}
int reverse(int h)
{
     int rev=0;
    while(h)
    {
        int mod=h%10;//144 4
        h=h/10; //      14
       rev=rev*10+mod;       //4
    }
    return rev;
}
