#include<stdio.h>
int main()
{
   int n;
   int a[] = {5,8,6,7,4,5,8};

   int length = sizeof(a)/sizeof(a[0]);



   printf("Elements of given array present on odd position: \n");

    for (int i=0; i<length; i=i+2)
      {

          printf("%d\n", a[i]);
      }

    return 0;
}
