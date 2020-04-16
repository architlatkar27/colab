#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include "shannonCapacity.h"
#include "bandwidth.h"
#include "Attenuation.h"

using namespace std;

int main(){
    cout<<"This is a program that can calculate latency, throughput, bandwidth, capacity, attenuation and noise\n";
    int choice;
    while(true){
        cout<<"Select choice function according to the number\n";
        cout<<"1. Attenuation\t2. Noise SNR and Distortion\n3. Latency\t4. Throughput\n5. Bandwidth\t6.Channel capacity Using Nyquist Formula\n7.Channel Capacity using Shannon's Formula\t8. End\n";
        cin>>choice;
        switch(choice){
            case 1: attenuation();cout<<endl;
                    break;
            case 2: noise();cout<<endl;
                    break;
            case 3: latency();cout<<endl;
                    break;
            case 4: throughput();cout<<endl;
                    break;
            case 5: bandwidth();cout<<endl;
                    break;
            case 6: nyquist();cout<<endl;
                    break;
            case 7: shannonCapacity();cout<<endl;
                    break;
            case 8: cout<<"Ending Program\n";exit(0);
            default: cout<<"Invalid choice...Please try again\n";
        }
    }
    return 0;
}
