#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,m,f,l,ele;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"enter the element to be searched"<<endl;
	cin>>ele;
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l)
	{
		if(a[m]==ele)
		{
			cout<<"element found at location  "<<m+1;
			break;
		}
		else if(ele>a[m])
		{
			f=m+1;
		}
		else
		{
			l=m-1;
		}
		m=(f+l)/2;
	}
	if(f<l)
	{
		cout<<"not found";
	}
}
