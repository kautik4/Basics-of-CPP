#include<iostream>
using namespace std;

int main(){
	float a,b;
	cout<<"Enter x value: ";
	cin>>a;
	cout<<"Enter y value: ";
	cin>>b;
	if(a>0 and b>0){
		cout<<"The point is in the 1st quadrant";
	}
	if(a<0 and b>0){
		cout<<"The point is in the 2nd quadrant";
	}
	if(a>0 and b<0){
		cout<<"The point is in the 3rd quadrant";
	}
	if(a<0 and b<0){
		cout<<"The point is in the 4th quadrant";
	}
	if(a==0 and b==0){
		cout<<"The point is on the origin";
		
	}
	if(a==0 and b!=0){
		cout<<"The point is on the y axis";
	}
	if(a!=0 and b==0){
		cout<<"The point is on the x axis";
	}
}
