#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int Factorial(int n)
{
	if(n<=1)
	{
		dp[n]=1;
		return 1;
	}
	if(dp[n]!=0)
	{
		return dp[n];
	}
	return dp[n]= n*Factorial(n-1);
}
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<Factorial(n)<<"\n";
	for(int i=0;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
    return 0;
	
}

