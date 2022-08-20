#include<iostream>
using namespace std;
int main()
{
    int arr[100] , i,n ,beg,mid,end,j;
    cout<<"Size of array"<<endl;
    cin>>n;
    cout<<"elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<"enter element to search"<<endl;
   cin>>j;

   beg=0;
   end=n-1;

   while(beg<=end)
   {
       mid=(beg+end)/2;
       if(arr[mid]==j)
       {
           cout<<"ellement is found at index ="<<(mid+1)<<endl;
       exit(0);
       }

       else if(arr[mid]<j)
      {
         beg=mid+1;
      }

      else if(arr[mid]>j)
      {
         end=mid-1;
      }

   }
   cout<<"element Not Found";

   return 0;
}       


 