#include <stdio.h>


 void BinarySearch(int arr[], int n, int num, int first, int last)
   {

   if(first > last)
    {

        printf("Number is not found");

    }

   else {

        int mid;

        mid = (first + last)/2;

        if(arr[mid]==num){

            printf("Element is found at index %d ",mid);

            exit(0);

        }
        else if(arr[mid]>num){


            BinarySearch(arr, num, first, mid-1);

        }
        else
            {

             BinarySearch(arr, num, mid+1, last);

            }

    }

}

  int  main()
    {
           int n;
           int arr[] = {2,5,7,9,12,15,18};
           printf("Enter the Number Which you want to Search : ");

           scanf("%d",n);

            int num=n;

            int first =0 ,

            last = (sizeof(arr)/sizeof(arr[0]))-1;

            BinarySearch(arr, num, first, last);
   }
