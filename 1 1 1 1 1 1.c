#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a[100],b[100],c,d[100],e,f,sum=0,min;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<c;i++)
    {
        sum=sum+a[i];
    }
    min=a[0];
     for(int i=0;i<c;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            d[i]=min;
        }

    }

    if(sum%2==0)
    {
        printf("0");
    }
    else
    {
        for(int i=0;i<1;i++)
    {

            d[i]=min;




         printf("\n%d",d[i]);
    }
    }

    return 0;
}
