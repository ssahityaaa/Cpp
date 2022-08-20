#include<iostream>
using namespace std;
int main()
{
	 int a;
	int* b=&a;
	 int** c=&b;
	 
	 cout<<"Enter any Value a = ";
	 cin>>a;
	 cout<<"You Entered the Value = "<<a<<endl;
	 cout<<"Address of The Variable a = "<<&a<<endl;
	 
	 cout<<"So, as we know that pointer holds"<<endl<<"the address of another Variable"<<endl;
	 
	 cout<<"Now, the addres of a in Variable b = "<<b<<endl;
	 cout<<"Address of Variable b = "<<&b<<endl;
	 cout<<"Value of a in Variable b = "<<*b<<endl;
	 
	 cout<<"Here, we are taking another Variable c"<<endl;
	 
	 cout<<"Address of b in Variable c = "<<c<<endl;
	 cout<<"Address of Variable c = "<<&c<<endl;
	 cout<<"Value of b in Variable c = "<<*c<<endl;
	 cout<<"Value of a in Variable c = "<<**c<<endl;
	 
	 
	 
	 
	 return 0;
}
