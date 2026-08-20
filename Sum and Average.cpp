#include<iostream>
using namespace std;
int main(){
	int n,m;
	int sum=0;
	cout<<"Enter n value";
	cin>>n;
	cout<<"Enter numbers"<<endl;
	for(int i=0;i<n;i++){
		cin>>m;
		sum=sum+m;
	}
	float avg;
	avg=sum/n;
	cout<<"Sum:"<<sum<<endl;
	cout<<"Average:"<<avg;
}
