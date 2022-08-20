#include <iostream>
using namespace std;

int main() {
	
	    int Xa,Xb,Xc;
	    
	    cout<<"Votes for A= ";
	    cin>>Xa;
	    cout<<"Votes for B= ";  
	    cin>>Xb;
	    cout<<"Votes for C= ";
	    cin>>Xc;
	   
	   {
	 
	    
	    if(Xa>50) cout<<"A"<<endl;
	    else if(Xb>50) cout<<"B"<<endl;
	    else if(Xc>50) cout<<"C"<<endl;
	    
	    else cout<<"NOTA"<<endl;
	}
	return 0;
}

