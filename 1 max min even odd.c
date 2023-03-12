#include <stdio.h>


int main()
{
    int a[1000],i,n,min,max;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even number\t",a[i]);
        }
        else
        {
             printf("\n%d is odd number\t",a[i]);
        }
    }
    min=max=a[0];
    for(int i=1;i<n;i++)
    {
    if(min>a[i])
    {
    min=a[i];
    }
    if(max<a[i])
    {
    max=a[i];
    }
    }
    printf("\n%d is min",min);
    printf("\n%d is max ",max);

    return 0;
}
