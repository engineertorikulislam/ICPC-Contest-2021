#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n,temp;
    int arr[50],arr2[50];
    cin >> t;
    while(t--){
      cin>> n;
      for(int i=0; i<n; i++){
        cin >> arr[i];
      }
      for(int i=0; i<n; i++){
        if(arr[i]>0){
            /// 0 3 0 0 1 3
            /// 1 1 0 1 1 1
            temp=arr[i];
            for(int j=i; temp!=0 && j>0;temp--,j--){
                arr2[j]=1;
            }

        }else{

            arr2[i] = 0;

        }
      }
    }
    for(int c=0; c<sizeof(arr2);c++){
        cout << arr2[c]<<" ";
    }
    return 0;
}


