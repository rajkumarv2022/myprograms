// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i=1,j=1,k=1,l=1;
    for(j=1;j<=5;j++)
    {

for(i=1;i<=j;i++)
{
    printf(" ");
}
for(i=5;i>=j;i--)
{
printf("*");
}
printf("\n");
}
    return 0;
}
