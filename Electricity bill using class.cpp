#include<iostream>
using namespace std;

class bill{
    private:
    int unit;
    float amount,rate;

    public:
    void input(){
        cout<<"Enter the Units ";
        cin>>unit;
        cout<<"Enter the Current Rate per Unit ";
        cin>>rate;
    }
    void calculate(){
        amount=rate*unit;
        cout<<"Your Bill Amount is "<<amount;
    }
};
int main(){
    bill p;
    p.input();
    p.calculate();

    return 0;
}