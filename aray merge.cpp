#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],c[10],k,i;
    cout<<"Enter Elements of First array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    cout<<"Enter elements of second array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>b[i];
        c[i+5]=b[i];
    }
    
    cout<<"Merged Array"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<c[i];
    }

    return 0;
    
}