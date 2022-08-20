#include<iostream>

using namespace std;

class node{

    public:
    int info;
    node* link;
    node* prevlink;
    node(int value){
        info=value;
        link=NULL;
        prevlink=NULL;

    }
};

void inserathead(node* &head, int value){
     node *n = new node(value);
    n->link=head;
    if(head!=NULL){

     head->prevlink=n;
    }
    

    head=n;
}


void insertatend(node* &head , int value){

    if (head==NULL){
        inserathead(head,value);

    }
    node*n = new node(value);
    node* start = head;
    while(start->link=NULL){
        start=start->link;
    }
    start->link=n;
    n->prevlink=start;
}

void display(node* head){
    node* start=head;
    while(start!=NULL){
        cout<<start->info<<"->";
        start=start->link;
    }
    cout<<endl;
}

void deletefirst(node* &head){
    node* todelete=head;
    head=head->link;
    head->prevlink=NULL;
}

void deleteion(node* &head, int loc){
    if(loc==1){
        deletefirst(head);
        return;
    }
    node* start=head;
    int count=1;
    while(start!=NULL && count!=loc){
        start=start->link;
        count++;
    }
       
    start->prevlink->link=start->link;
         if(start->link!=NULL){
               start->link=start->prevlink;
}

  
    delete start;
}




int main(){
    node* head=NULL;

    
    inserathead(head,4);
    inserathead(head,3);
    inserathead(head,2);
    inserathead(head,1);   
     display(head);
   
    deleteion(head,1);
    display(head);

    return 0;
}