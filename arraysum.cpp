#include<iostream>
using namespace std;
int main()
{
	//here we are taking an input of array.
	int s=0;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	// process of sorting starting from here.
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
			s=a[j];
			a[j]=a[j+1];
			a[j+1]=s;
				
			}
		}
	}
	// sorted array is getting printed
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
for(int i=0;i<n;i++)
{
	if(a[i]>0) // checking for the first positive index
	{
		s=i;
		break;
	}
}
int p=0;
for(int i=s;i<n;i++)  // finding the sum from that positive value and so on
{
p=p+a[i];
cout<<a[i];
}
cout<<"the sum is"<<p;
return 0;
}
// happy programming.
