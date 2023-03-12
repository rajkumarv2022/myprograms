/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a[3]={10,20,30};
   int *p=a,b;
   printf("%d",++*p);
   printf("\n%d",(*p)++);
   printf("\n%d",*++p);
   printf("\n%d",*p++);

    return 0;
}




