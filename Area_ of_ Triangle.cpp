#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,z=1;
    cin>>t;
    while(t--)
    {
        long double a, b, c, s, A;
        cin>>a>>b>>c;
        s = (a+b+c)/2;
        A = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << std::setprecision(13);
        cout<<"Case "<<z<<": "<<A<<endl;
        z++;
    }
}

