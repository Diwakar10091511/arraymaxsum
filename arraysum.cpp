#include<iostream>
using namespace std;
int main()
{
	int s;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
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
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
for(int i=0;i<n;i++)
{
	if(a[i]>0)
	{
		s=i;
		break;
	}
}
int p=0;
for(int i=s;i<n;i++)
{
p=p+a[i];
cout<<a[i];
}
cout<<"the sum is"<<p;
return 0;
}

