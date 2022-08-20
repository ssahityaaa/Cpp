#include<iostream>
using namespace std;
int fibn(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibn(n-1)+fibn(n-2);
}

int main(){
    int n,p;
    cin>>n;
    cout<<fibn(n);
    return 0;
   

}