#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif


//Calculate bandwidth based on either nyquist or shannon,latency & throughput.

void bandwidth()
{		cout<<"Calculate Bandwidth for?\n1.Noiseless Channel(Nyquist Bit Rate)\n2.Noisy Channel(Shannon's Capacity')\n";
		ll n;cin>>n;
		if(n==1)
		{
			// Noiseless Channel: Nyquist Bit Rate
			// Bitrate = 2 * Bandwidth * log2(L)
			// Bandwidth is Bandwidth of the channel
			// BitRate is the bit rate in bits per second (Maximum Bitrate)
			
			ll levels,bitrate;			
			cout<<"Enter the Bitrate of the Noiseless Channel in bps\n";
			cin>>bitrate;

			cout<<"Enter the number of signal levels in the signal that noiseless channel is transmitting\n";
			cin>>levels;
			
			ll bw = (bitrate / ((float)2.0 * log2(levels)));
			
			cout<<"Bandwidth: "<<bw<<" Hz\n";
			
		}
		else if(n == 2)
		{	ll capacity,SNR;	
			cout<<"Enter the Capacity of the Noisy Channel in bps : ";
			cin>>capacity;
			cout<<"Enter the SNR (signal-to-noise ratio) value : ";
			cin>>SNR;
			float bw = capacity/((float) log2(1+SNR));
			cout<<"Bandwidth of the noisy channel is : "<<bw<<" Hz"<<endl;
		}
		else
		{
			cout<<"Error:Invalid Input\nOnly 1 and 2 are allowed\n";
		}
		
}


void latency()
{
	//Defines how long it takes for an entire message to completely
	//arrive at the destination from the time the first bit is sent out
	//from the source
	// Latency = propagation time + transmission time + queuing time + processing delay
	//propagation time
	ll dist,prop_speed=(2.4 * 1e8);
	cout<<"What is the distance between source and destination in km?\n";
	cin>>dist;
	cout<<"What is the propagation speed in m/s? (2.4 * 10^8 m/s -> light speed)\n";
	cin>>prop_speed;   
	float prop_time = ((dist * 1000)/((float) prop_speed));
	cout<<"Propagation Time : "<<prop_time*1000.0<<" ms"<<endl;
	//transmission time
	float tr_time,msg_size;
	ll bw;
	cout<<"Enter the message size in kbyte : ";
	cin>>msg_size;
	cout<<"Enter the Bandwidth of the channel in Gbps: ";
	cin>>bw;
	tr_time = ((msg_size*1000*8)/((float)(bw * 1e9)));
	cout<<"Transmission time : "<<(tr_time*1000.0)<<" ms\n";
	//queuing time
	float q_time,prc_delay;
	cout<<"Enter the Queuing time and processing delay of the network in ms :\n";
	cin>>q_time>>prc_delay;
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"Queuing time : "<<q_time<<" ms\n";
	cout<<"Processing delay : "<<prc_delay<<" ms\n";
	cout<<"Transmission time : "<<(tr_time*1000.0)<<" ms\n";
	cout<<"Propagation Time : "<<prop_time*1000.0<<" ms"<<endl;
	cout<<"Latency = propagation time + transmission time + queuing time + processing delay\n";
	cout<<"--------------------------------------------------------------------------------\n";
	float latency = tr_time*1000.0 + prop_time*1000.0 + q_time + prc_delay;
	cout<<"Latency = "<<latency<<" ms\n";
	cout<<"--------------------------------------------------------------------------------\n";
}

void throughput()
{
	//Measure of how fast we can actually send data through a
	//network
	
	cout<<"Enter the Bandwidth (in Mbps) of the network\n";
	ll bw;cin>>bw;
	cout<<"Enter the actual data that can be passed through this link, in frames per minute\n";
	ll fpm;cin>>fpm;
	cout<<"Enter average number of bits in each frame\n";
	ll bits;cin>>bits;
	float thpt = ((fpm*bits)/((float)60.0));
	cout<<"Actual Bandwidth of the network : "<<bw<<" Mbps"<<endl;
	cout<<"Throughput : "<<(thpt/(float)1e6)<<" Mbps"<<endl;
	
}



