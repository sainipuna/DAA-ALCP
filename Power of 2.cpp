#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if((n&n-1)==0){
		cout<<"Power of 2";
	}
	else{
		cout<<"not a power of 2";
	}
}
