#include<iostream>

using namespace std;

int main() {
    int data[10];
    int data2[10],c,ch1,ch2,ch3,i;

    cout<<"Enter 4 bits of data one by one\n";
    cin>>data[0];
    cin>>data[1];
    cin>>data[2];
    cin>>data[4];

    //Calculation of even parity

    data[6]=data[0]^data[2]^data[4];
	data[5]=data[0]^data[1]^data[4];
	data[3]=data[0]^data[1]^data[2];

	cout<<"Hamming Code  data is \n";
	for(i=0;i<7;i++)
        cout<<data[i];

	cout<<"\n\nEnter received data bits one by one\n";
    for(i=0;i<7;i++)
        cin>>data2[i];

    ch1=data2[6]^data2[4]^data2[2]^data2[0];
	ch2=data2[5]^data2[4]^data2[1]^data2[0];
	ch3=data2[3]^data2[2]^data2[1]^data2[0];

	c=ch3*4+ch2*2+ch1 ;

    if(c==0) {
		cout<<"No error found while transmission of data\n";
    }
	else {
		cout<<"\nError found at  position \n "<< c;

		cout<<"\nData sent : \n";
		for(i=0;i<7;i++)
        	cout<<data[i];

		cout<<"\nData received : ";
        for(i=0;i<7;i++)
        	cout<<data2[i];

		cout<<"\nCorrect message is\n";

		if(data2[7-c]==0)
			data2[7-c]=1;
        else
		 	data2[7-c]=0;
		for (i=0;i<7;i++) {
			cout<<data2[i];
		}
	}

	return 0;
}
