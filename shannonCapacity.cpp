#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;


void shannonCapacity(){
    cout<<"This is a function  to calculate capacity according to Shannon capacity\n";
    cout<<"Enter SNR (Signal To Noise Ratio): ";
    double SNR;
    cin>>SNR;
    double BW;
    cout<<"Enter Bandwith(in KHz): ";
    cin>>BW;
    double Capacity;
    Capacity = BW*log2(1+SNR);
    cout<<"Capacity of channel: "<<Capacity<<endl;
    return;
}

// int main(){
//     shannonCapacity();
//     return 0;
// }