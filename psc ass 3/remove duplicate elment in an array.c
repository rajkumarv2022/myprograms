#include<stdio.h>
int main(){
    /*code*/
    int n,a[100],ct=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        ct=0;
       for(int j=0;j<i;j++)
       {
           if(a[i]==a[j])
           ct++;
       }
       if(ct==0)
       printf("%d ",a[i]);


    }
    return 0;

}
