#include<iostream>
using namespace std;
int b,i,j,ch,n,pos;
int a[100];
void add(int*,int,int,int);
void del(int*,int,int);
void disp(int*,int);
void find(int*,int,int);
int main()
{
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter 1 for insertion"<<endl<<"enter 2 for deletion"<<endl<<"enter 3 for search"<<endl<<"enter 4 for display"<<endl;
	cin>>ch;
	while(ch!=0)
	{
		switch(ch)
		{
			case 1:
				{
					int pos;
					int ele;
					cout<<"enter the position"<<endl;
					cin>>pos;
					cout<<"enter the element"<<endl;
					cin>>ele;
					n=n+1;
					add(a,pos,ele,n);
				}
				break;
			case 2:
				{
					cout<<"enter the position"<<endl;
					int pos;
					cin>>pos;
					n=n-1;
					del(a,pos,n);
				}
				break;
			case 3:
				{
					cout<<"enter the element"<<endl;
					int ele;
					cin>>ele;
					find(a,ele,n);
				}
				break;
			case 4:
				{
					disp(a,n);
				}
				break;
			}
		cout<<"enter 1 for insertion"<<endl<<"enter 2 for deletion"<<endl<<"enter 3 for search"<<endl<<"enter 4 for display"<<endl;
		cin>>ch;
	}
}
void del(int a[],int pos,int n)
{
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
}
void add(int a[],int pos,int ele,int n)
{
	for(i=n;i>pos-1;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=ele;
}
void find(int a[],int ele,int n)
{
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			cout<<i+1;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"not found";
	}
}
void disp(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}


