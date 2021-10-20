#include<bits/stdc++.h>
using namespace std;
string xorOp(string a, string b)
{
    string result = "";
    int n = b.length();
    for(int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
            result += "0";
        else
            result += "1";
    }
    return result;
}

string mod2div(string divident, string divisor)
{

    int pick = divisor.length();
    string temp = divident.substr(0, pick);

    int n = divident.length();

    while (pick < n)
    {
        if (temp[0] == '1')
            temp = xorOp(divisor, temp) + divident[pick];
        else
            temp = xorOp(string(pick, '0'), temp) +
                  divident[pick];
        pick += 1;
    }
    if (temp[0] == '1')
        temp = xorOp(divisor, temp);
    else
        temp = xorOp(string(pick, '0'), temp);

    return temp;
}

void encodeData(string data, string divider)
{
    int len = divider.length();
    string modifiedData = (data +string(len - 1, '0'));
    string crcBit = mod2div(modifiedData, divider);
    string dataSend = data + crcBit;
    cout << "\n\nModified Data: " << modifiedData <<"\n";
    cout << "Data Send :" << dataSend << "\n";
    cout << "CRC (Cyclic Redundancy Check) : " << crcBit << "\n";
}


int main(){
    string data,divider;
    cout <<"Enter a Data: ";
    cin >> data;
    cout <<"Enter a Divider: ";
    cin >> divider;
    encodeData(data, divider);

    return 0;
}

