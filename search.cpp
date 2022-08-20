#include<iostream>
using namespace std;
int main()
{
    int arr[100], beg,mid,end,i,num,tgt;

    cout<<"defne size of array"<<endl;
    cin>>num;

    cout<<"enter values in sorted array"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];

    }
    beg = 0;
    end = num;

    cout<<"Enter value to search = "<<endl;
    cin>>tgt;

    while(beg <= end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==tgt)
        {
            cout<<"Element is found at indexx"<<(mid+1)<<endl;
            exit(0);
        }

        else if(tgt>arr[mid])
        {
            beg=mid+1;

        }
        else if(tgt < arr[mid])
        {
            end=mid -1;

        }
    }
    cout<<"Number is not found"<<endl;
    
    return 0;
}
