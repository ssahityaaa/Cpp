#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,k,l;
    cout<<"Enter no of elements of array"<<endl;
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter location to enter element"<<endl;
    cin>>l;
    cout<<"enter element to enter in array"<<endl;
    cin>>j;
   for(i=k-1;i>=l-1 ;i--)
    {
        a[i+1]=a[i];
    }
    a[l-1]=j;
    cout<<"corected array"<<endl;
    for(i=0;i<=k;i++)
    cout<<a[i];
    

    return 0;
}