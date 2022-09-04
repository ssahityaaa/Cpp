#include<iostream>
using namespace std;

class largest{
    private:
    int a,b,c;
     public:
     void input(){
        cout<<"Enter three numbers\n";
        cin>>a>>b>>c;
     }
     void calculate(){
        if(a>b && a>c){
            cout<<a;
        }
        else if(b>c && b>a){
            cout<<b;
        }
        else{
            cout<<c;
        }

     }
};
int main()
{
    largest m;
    m.input();
    m.calculate();

    return 0;

}