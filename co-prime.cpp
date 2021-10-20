#include "iostream"
using namespace std;
int gcd(int a,int b)
    {
       if(b==0) return a;
       return gcd(b,a%b);
    }
    int main()
    {  int n,c=0;
        cin>>n;
        while(n--){
        int l,r,x,y,i,num,ans=0;
        cin>>l>>r>>x>>y;
        num=y/x;
        if(y%x!=0)
            {cout<<"0"<<endl;

            return 0;

            }
        for(i=1;i*i<=num;i++)
            {
            int j=num/i;
            if(num%i==0 && gcd(i,j) == 1 && l<=i*x && i*x <=r && l<= j*x && j*x <=r)

            ans+=i==j;
        }
        c++;
        cout<<"Case "<<c << ": "<<ans<<endl;
    }
    }
