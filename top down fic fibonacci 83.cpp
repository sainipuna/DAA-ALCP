#include<bits/stdc++.h>
using namespace std;
int memo[1000];
int fib(int n){
	if(n<=1) 
		return n;
	if (memo[n]!=-1)
		return memo[n];
	memo[n]=fib(n-1)+fib(n-2);
	return memo[n];
}
int main(){
	int n;
	cout<<"Enter n:";
	cin>>n;
	 fill(memo, memo + 1000, -1);
	cout<<"Fibonacci("<<n<<")="<<fib(n)<<endl;
	return 0;
}
