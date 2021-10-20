#include <stdio.h>

int main()
 {
   int arry[50],n,i,j=0,lrg,lrg2

    printf("Input %d elements in the Array :\n",n);
       for(i=0;i<n;i++)
            {
             scanf("%d",&arry[i]);
	       }

   lrg=0;
    for(i=0;i<n;i++)
    {
      if(lrg<arry[i])
	  {
           lrg=arry[i];
           j = i;
      }
    }


   lrg2=0;
   for(i=0;i<n;i++)
    {
     if(i==j)
        {
          i++;
		  i--;
        }
      else
        {
          if(lrg2<arry[i])
	     {
               lrg2=arry[i];
             }
        }
  }

  printf("%d",lrg2);
  return 0;
}

