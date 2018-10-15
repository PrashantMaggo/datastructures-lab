#include<iostream>
using namespace std;
void search(int*,int,int);
int main()
{
	int n,i,a[100];
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int pos;
	int ele;
	cout<<"enter element to be searched"<<endl;
	cin>>ele;
	search(a,ele,n);
}
void search(int a[],int ele,int n)
{
	int pos=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			pos=i+1;
			break;
		}
	}
	if(pos>0)
	{
		cout<<"element found at "<<pos;
	}
	else
	{
		cout<<"element not found";
	}
}
