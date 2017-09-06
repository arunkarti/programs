#include<iostream>
using namespace std;
int length(char a[]);
void swap(char* a, char* b);
void permute(char a[],int l,int r);

int main()
{
	char a[100];
	cin>>a;
	int l=length(a);
	permute(a,0,l);
}
void permute(char a[],int l,int r)
{
	if(l==r)
	{string str(a);
	cout<<str<<endl;}
	
	for(int i=l;i<r;i++)
	{
		swap(&a[l],&a[i]);
		permute(a,l+1,r);
		swap(&a[l],&a[i]);
	}
}
void swap(char* a, char* b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
int length(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++){}
	return i;
	}
	

