// Online C compiler to run C program online
//strong number
#include <stdio.h>

int main() {
    // Write C code here
    int num,fact=1,sum=0,copy,d,f;
    scanf("%d",&num);//145
    copy=num;//145
    while(num)
    {
        d=num%10;//5//4//1
        while(d)//5//4//3//2//1//0  //4 3 2 1 0 //1
        {
         fact=fact*d;//120 //24   //1
         d--;        //0   //0    //0
        }
        sum=sum+fact;//120 //144  //145
        fact=1;
        num=num/10;//14//1//0
    }
    if(copy==sum)
    printf("1");
    else
    printf("0");


    return 0;
}
