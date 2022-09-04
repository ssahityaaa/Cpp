#include<iostream>
#include<string>
using namespace std;

class fact{
    private:
    int a,ans=1;
    public:
    void input();
    void calculate();
    void display();
};
void fact :: input(){
    cout<<"Enter the Number to calculate its Factorial ";
    cin>>a;
}
void fact:: calculate(){
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
}
void fact:: display(){
    cout<<f"actorial of " <<a<<"is "ans;
}

int main(){
    fact m;
    m.input();
    m.calculate();
    m.display();


   
    return 0;
}