#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//logic for finding prime number using recursion
bool isPrime(int z,int i=2)
{
	if(z<=2)
	{
		if(z==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(z%i==0)
	{
		return false;
	}
	if(i*i>z)
	{
	    return true;
    }
    isPrime(z,i+1);
}

int main()
{
	cout<<"Prime logic using recursion concept"<<"\n";
	int n;
	cout<<"Enter a number:"<<"\n";
	cin>>n;
	cout<<isPrime(n,2);
	cout<<"\n";
	
	//logic using iteration 
	cout<<"Prime logic using iteration"<<"\n";
	int j,count=0;
	cout<<"Enter a number:"<<"\n";
	cin>>n;
	for(j=2;j*j<=n;j++)
	{
		if(n%j==0)
        {
        	count++;
			break;
		}
	}
	if(count==1)
	{
		cout<<n<<" is not a prime number";
	}
	else if(n==1)
	{
		cout<<"not prime";
	}
	else
	{
		cout<<n<<" is a prime number";
	}
	return 0;
}
