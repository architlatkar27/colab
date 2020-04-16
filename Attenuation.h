#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
void printsndr(double s,double n);
void attenuation(){ 
    double p1,p2;
    cout<<"Enter initial and final power for Calculating Attenuation: "<<endl;
    cin>>p1>>p2;
    double db = log10(p2/p1)*10; 
    if(db<0)
        cout<<"The Attenuation is "<<(int)db<<" dB"<<endl;
    else
        cout<<"The Amplification is "<<(int)db<<" dB"<<endl;
}  
void noise(){
    double sig,noi;
    cout<<"Enter Signal Power and Noise Power to Calc SNR and SNR(db) { in mW } : "<<endl;
    cin>>sig>>noi;
    cout<<"The SNR is "<<(sig/noi)<<endl;
    cout<<"The SNR(db) is "<<10*(log10(sig/noi))<<endl;
    cout<<"Do you want to calculate noise with distortion as well? y/n"<<endl;
    char choice;
    cin>>choice;
    if(choice=='y' || choice == 'Y')    
        printsndr(sig,noi);
    else return;
}
void printsndr(double s,double n){
    int d;
    cout<<"Enter Distortion level to calculate SNDR : "<<endl;
    cin>>d;
    cout<<"The SNDR is "<<10*log10((s+n+d)/(n+d))<<"dB"<<endl;
} 

