#include<iostream>
#include<algorithm> 
using namespace std;
#include<string>
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
cout<<str;
    return 0;
}