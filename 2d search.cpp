#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int m1[r][c];

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>m1[i][j];
        }
    }
    int key;
    cin>>key;
     for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(m1[i][j]==key){
                cout<<i<<" "<<j<<" ";
                exit(0);
            }
            else if(m1[i][j]<key){
                r++;
            }
            else if(m1[i][j]>key){
                c--;
            }
            
        }
    }
    cout<<"Not Found\n";
    return 0;
    
}
