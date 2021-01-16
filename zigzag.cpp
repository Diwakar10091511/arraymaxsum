#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int c=1;
	//int d=1;
	//a[0]=1;
//	a[1]=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		}	
	//cout<<"which number you want";
	//int k;
	//cin>>k;
	//cout<<a[k-1];
	for(int i=0;i<n-1;i+=2)
	{
		if(a[0]>a[1])
		{
		
		if(a[i]<a[i+1])
		{
			c=0;
			break;
		}
}
	if(a[i]<a[i+1])
		{
		
		if(a[0]>a[1])
		{
			c=0;
			break;
		}
}}
		if(c==0)
		cout<<"not zig zag";
		else
		cout<<"zig zag";
	
	return 0;
}
