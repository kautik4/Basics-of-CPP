#include<iostream>
using namespace std;

int main(){
	int a,b;
	int set;
	int reset;
	int bit_to_be_set;
	int bit_to_be_reset;
	cout<<"Enter a number in decimal ";
	cin>>a;
	int binary_a = a;
	cout<<"Enter bit to be set ";
	cin>>bit_to_be_set;
	cout<<"Enter bit to be reset ";
	cin>>bit_to_be_reset;
	set = a|(1<<bit_to_be_set);
	reset = a&(~(1<<bit_to_be_reset));
	cout<<set<<endl;
	cout<<reset<<endl;
}
