#include<iostream>
using namespace std;
int main(){
	int n,target;
	cout<<"Enter no. of elements:";
	cin>>n;
	cout<<"Enter elements:";
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count=0;
	cout<<"ENter target:";
	cin>>target;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				cout<<"indeics:"<<i<<" "<<j<<endl;
				cout<<"elements:"<<arr[i]<<" "<<arr[j]<<endl;
				count++;
				return 0;
			}
		}
	}
	if(count==0){
		cout<<"invalid pair!!"<<endl;
	}
}
