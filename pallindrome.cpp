#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(int x,int y,string s)
{
	if(x>y)
	{
		return true;
	}
	else if(s[x]!=s[y])
	{
		return false;
	}
	return isPallindrome(x+1,y-1,s);
}
int main()
{
	string s;
	cout<<"Enter a string:"<<"\n";
	cin>>s;
	int n=s.size();
	cout<<isPallindrome(0,n-1,s);
	return 0;
}
