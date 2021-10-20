#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    short t;

    cin >> t;

    int cs = 1;

    while(t--)
    {
        long long k;

        cin >> k;

        long long divs[k+1];

        for(long long i = 0 ; i < k ; i++)
         cin >> divs[i];

            if(k == 1)
            {
                printf("Case %d: %lld\n", cs, divs[0] * divs[0]);
            }

            else
            {
              printf("Case %d: %lld\n", cs, *min_element(divs, divs + k) * *max_element(divs, divs + k));

            }

            cs++;

    }

}

