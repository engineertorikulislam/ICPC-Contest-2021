# include <iostream>
using namespace std;

int main()
{

	long long  n, m, a,x,y,ans,ans2;



	 cin >> n >> m >> a;

     x=n*m;
     y=a*a;

     if(x%y==0){

          ans =x/y;
       cout<<ans<<endl;
     }


     else{
      ans2= x/y +2;
      cout<<ans2<<endl;
     }



	return 0;
}

