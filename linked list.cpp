#include<iostream>
using namespace std;

class node{                          //creation of new node for insertion
    public:
    int info;                        //information stored in linkedlist
    node* link;                      //pointing the address
    node(int val){
        info=val;                    //put value in data part
        link=NULL;                   //put null value in link part
    }
    
};

void insertinlast(node* &head, int val){
    node* n = new node(val);   
      if(head==NULL){
        head=n;
        return;
      }                              //first node of any value
    node* start = head;                //start traversing from start
    while(start->link=NULL){          //runn loop till null value apears inn link part
        start=start->link;
    }
    start->link=n;
    
}
void insertathead(node*head, int val){
    node* n = new node(val);
    n->link=head;
    head=n;
}
void display(node* head){
    node* start=head;                   //print first node
    while(start!=NULL){                //print till start becomes null
        cout<<start->info<<"->";
        start=start->link;               // after printing set the new start to new node
    }
    cout<<endl;
}


int main(){

    node* head=NULL;

    insertinlast(head,2);
    insertinlast(head,4);
    insertinlast(head,6);
    display(head);
    insertathead(head,9);
    display(head);
    return 0;
}