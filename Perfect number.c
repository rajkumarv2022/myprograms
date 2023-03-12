// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here4

    int a;
       int b;
       int sum=0;
    scanf("%d",&a);
    for(int c=1;c<=1000000;c++)
    {

 b=a%c;

    if(b==0)
    {
        if(a==c)
        {
            break;
        }
        printf("\n%d",c);
        sum=sum+c;

    }

}
if(a==sum)
{
printf("\n%d",sum);
printf("\nPerfect number");
}
else
{
    printf("\nNot perfect number");
}
    return 0;
}
