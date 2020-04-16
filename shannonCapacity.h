#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;


void shannonCapacity(){
    double SNR,BW,Capacity;
    cout<<"This is a function  to calculate capacity according to Shannon capacity\n";
    cout<<"Enter SNR (Signal To Noise Ratio): ";
    cin>>SNR;
    cout<<"Enter Bandwith(in KHz): ";
    cin>>BW;
    Capacity = BW*log2(1+SNR);
    cout<<"Capacity of channel: "<<Capacity<<"kbps"<<endl;
    return;
}

void nyquist()
{
	float b,l;
	cout<<"bandwidth in kHz"<<endl;
	cin>>b;
	cout<<"enter number of levels"<<endl;
	cin>>l;
	float r=2*b*log2(l);
	cout<<"the bandwidth of the channel is "<<r<<"kbps "<<endl;

	return ;
}
