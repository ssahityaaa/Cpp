#include<iostream>
using namespace std;
	
	int main()
	{
int i,j,n,k;
cout<<"enter the nno"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
	for(k=1;k<=n-1;k++)
	{
		cout<<"-";
		
		
	}
	for(j=1;j<=i;j++)
	{
		if(i%2==1)
		cout<<"*";
		else
		cout<<"#";
		
	}
	cout<<endl;
}
	return 0;
	}
