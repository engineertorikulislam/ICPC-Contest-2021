#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    while(n--)
    {
        int k,minimum,mid,maximun;
        long long int m;
        cin>>k;
        while(k==2 ? cin>>minimum>>mid : cin>>maximun)
        {
            if(k==1)
            {
                m=maximun*maximun;
                break;
            }
            else
            {
                m=minimum*maximun;
                break;
            }

        }
        cout<<"Case "<<count<<": "<<m<<endl;
        count++;
    }

    return 0;
}
