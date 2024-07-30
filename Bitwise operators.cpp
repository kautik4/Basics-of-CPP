#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	cout<<"Enter the first number ";
	cin>>a;
	cout<<"Enter the seccond number  ";
	cin>>b;
	cout<<"AND "<<(a&&b)<<endl;
	cout<<"OR "<<(a||b)<<endl;
	cout<<"XOR "<<(a^b)<<endl;
	cout<<"NOT of a "<<~a<<endl;
	cout<<"NOT of b "<<~b<<endl;
	cout<<"Left Shift of a"<<(a<<2)<<endl;
	
}
