#include<bits/stdc++.h>
using namespace std;
int LongestIncreasingSequence(vector<int> &arr){
	int n=arr.size();
	vector<int>dp(n,1);
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	return *max_element(dp.begin(),dp.end());
}
int main(){
	int n;
	cout<<"Enter Number of elements:";
	cin>>n;
	cout<<"Enter elements:";
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Longest Increasing sequence length is:"<<LongestIncreasingSequence(arr)<<" ";
	return 0;
}
