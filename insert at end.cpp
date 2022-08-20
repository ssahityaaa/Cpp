#include<iostream>
using namespace std;

class node{
    public:
    int info;
    node* link;
    node(int value){
        info=value;
        link= NULL;
    }
};

void insertinlast(node* &head, int value){
    node* n = new node(value);
    if(head==NULL){
        head=n;
        return;
    }
    node* start = head;
    while(start->link=NULL){
        start=start->link;

    }
start->link=n;
}

void display(node* &head){
    node*start=head;
    while(start!=NULL){
        cout<<start->info<<"->";
        start=start->link;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertinlast(head,8);
    insertinlast(head,9);

    display(head);


    return 0;
}