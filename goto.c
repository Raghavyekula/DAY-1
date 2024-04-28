#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10]={2,3,4,5,6,7,8,6,4,5};
   int b[10]={4,6,7,4,6,6,7,6,4,6};
   int i,j;
    for (i = 0; i < 10; i++)
    for (j = 0; j < 10; j++)
     if (a[i] == b[j])
     {
       goto found;
     }
 found:
 printf(" index %d value %d\n",a[i],b[i]);

    return 0;
}
