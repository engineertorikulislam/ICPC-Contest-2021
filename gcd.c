#include <conio.h>
#include <iostream.h>

void main()
{
    int x,y,z;
    int d,i;
    cin>>x>>y>>z;
    d=1;
    i=1;
    while(i<=x&&i<=y&&i<=z)
    {
        if(x%i==0&&y%i==0&&x%i==0)
            d=i;
        i++;
    }
    cout<<"GCD to -"<<x<<" "<<y<<" "<<z<<" is "<<d<<" ";

    getch();
}
