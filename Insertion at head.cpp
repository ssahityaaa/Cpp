#include<iostream>
using namespace std;

class node{
    public:
    int info;
    node* link;
    node(int value){
        info=value;
        link=NULL;
    }
};

void insertathead(node* &head, int value){
     node* n = new node(value);
     n->link=head;
     head=n;
}

void display(node* head){
    node* start=head;
    while(start!=NULL){
        cout<<start->info<<"->";
        start=start->link;
    }
    cout<<endl;
}

int main (){
    node* head=NULL;
    insertathead(head,8);
    
    insertathead(head,9);
   
 
    display(head);

    return 0;
}