#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a,b,res,count=1;
        char c;
        cin>>a>>b;
        cin>>c;
        switch(c)
        {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;

        case '%':
            res=a%b;
            break;

        case '/':
            res=a/b;
            break;

        case '*':
            res=a*b;
            break;
        }
        cout <<"Case "<<count++ <<": "<<res<<endl;
    }

    return  0;

}
