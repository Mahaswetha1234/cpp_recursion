#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
	if((n==1)||(n==0))
	{
		return (n);
	}
	else
	{
	    return (fibonacci(n-1)+fibonacci(n-2));
	}
}
int main()
{
	int n;
	int i=0;
	cout<<"Enter the value of n";
	cin>>n;
	cout<<"Fibonacci Series is:";
	while(i<n)
	{
		cout<<" "<<fibonacci(i);
		i++;
	}
	
	//logic using iteration
	int n1=0,n2=1,n3,number;    
    cout<<"\nEnter the number of elements: ";    
    cin>>number;    
    cout<<n1<<" "<<n2<<" ";  
    for(i=2;i<number;i++)    
    {    
        n3=n1+n2;    
        cout<<n3<<" ";    
        n1=n2;    
        n2=n3;    
    }    
    return 0;  
}  
