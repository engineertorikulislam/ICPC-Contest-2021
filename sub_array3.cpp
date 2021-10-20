#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,res=0;
  int arr[50];
  cin>> n>>x;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<n; i++){
    int sum=0;
    for(int j=i; j<n; j++){
        sum+=arr[j];
        if(sum == x){
            res++;
        }

    }
  }
  cout << (res) << endl;
  return 0;
}
