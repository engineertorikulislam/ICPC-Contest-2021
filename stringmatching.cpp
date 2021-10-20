#include<bits/stdc++.h>;
using namespace std;
int main()
{
    char str[10000];
    char str1[10000];
    int n;
    cin>>n;
    if(n>=1 && n<=20)
    {
        while(n--)
        {
            int i=0, j=0, a=0, b=0, length1=0, length2=0;
            cin>>str>>str1;

            length1=strlen(str);
            length2=strlen(str1);
            if(length1==length2 && length1<=10000)
            {
                for(i=0; i<length1; i++)
                {
                    for(j=0; j<length1; j++)
                    {
                        if(str[i]==str[j]) a++;
                        if(str1[i]==str1[j]) b++;
                    }
                }
            }
            if(a==b)
            cout<<"yes"<<endl;

            else
             cout<<"no"<<endl;
        }
    }
    return 0;
}
