#include <bits/stdc++.h>
using namespace std;

int maxArrSubArraySum(long long a[], int size)
{
    int maxArr = a[0];
    int cMax = a[0];
    for (int i = 1; i < size; i++)
    {
        cMax = max(a[i], cMax+a[i]);
        maxArr = max(maxArr, cMax);
    }
    return maxArr;
}

int main()
{
    int t,count=1;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        long long a[n],temp[n];
        for(int i=0; i<n; i++) cin>> a[i];
        for(int i=0; i<n; i++) temp[i] = a[i];
        sort(a, a + n);
        int ans=n;
        for(int i=0; i< n; i++)
        {
            if( a[i]==temp[i])
            {
                ans--;
            }
        }
        int subSum = maxArrSubArraySum(a, n);
        ans = (ans/2)+1;
        ans = ans>1?ans-1:ans;
        cout << "Case " <<count++ <<": " << subSum << " " << ans <<"\n";
    }
    return 0;
}
