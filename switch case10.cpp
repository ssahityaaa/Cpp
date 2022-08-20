#include<math.h>
#include <iostream>
using namespace std;

 
int main () {
   // local variable declaration:
   int n;
   cin>>n;
   int sum = 0;
   int orignaln = n;
   while(n>0){
       int lastdigit = n%10;
       sum+= pow(lastdigit,3);
       n=n/10;
   }
   if(sum==orignaln){
       cout<<"amstrong number";
   }
   else
   {cout<<"not amstrong number";
   }
   
		
   
  
   return 0;
}
