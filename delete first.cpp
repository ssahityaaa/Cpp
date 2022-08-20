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
void deletefirst(node* &head){
    node* todelete=head;
    head=head->link;

    delete todelete;
}

void display(node* head){
    node*start=head;
    while(start!=NULL){
        cout<<start->info<<"->";
        start=start->link;
    }
    cout<<endl;
}

void deletion(node* &head,int value){
    node* start=head;
    while(start->link->info!=value){
          start=start->link;
    }
    node* todelete=start->link;
    start->link=start->link->link;

    delete todelete;
}

int main(){
    node* head=NULL;
    insertinlast(head,1);
    insertinlast(head,2);
   

    display(head);

    deletefirst(head);
    display(head);

    return 0;
}