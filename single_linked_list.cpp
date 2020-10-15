#include "iostream"
using namespace std;
struct node{
int data;
node *next;
};
//linked list class
class linkedlist
{
private:
    node *head,*tail;
public:
    linkedlist(){
    head=NULL;
    tail=NULL;
    }
//adding node at end
    void add_node(int n){
    node *tmp=new node;
    tmp->data=n;
    tmp->next=NULL;
    if(head==NULL){
        head=tmp;
        tail=tmp;
    }
    else{
        tail->next=tmp;
        tail=tail->next;
    }
    }
    node* gethead(){
    return head;
    }
    // two display functions using method overloading
//displaying all nodes called by display function
    void display(node* head){
    if(head==NULL){
        cout<<NULL<<endl;
    }
    else{
        cout<<head->data<<endl;
        display(head->next);
    }
    }
//display function called by variable in main function
    void display(){
    if(head==NULL){
        cout<<NULL<<endl;
    }
    else{
        cout<<head->data<<endl;
        display(head->next);
    }
    }
// funvtion to concatenate two nodes
    void concat(node *a,node *b){
    if(a != NULL && b!=NULL){
      if(a->next==NULL)
            a->next=b;
      else
        concat(a->next,b);
    }}
//function to add node at specific position
    void add_node_at(int x,int n,int len){
        node *temp=new node;
        node *temp1=new node;
        node *newdata=new node;
        newdata->data=x;
        temp=head;
        for(int i=0;i<=n;i++){
        {
            if(n<len){
                    if(i==n){
                            newdata->next=temp->next;
                        temp->next=newdata;
                    }
                    else{
                temp=temp->next;
            }}
        }
        }
    }
//to replace a node with some other node
    void replace_at(int x,int n,int len){
        node *temp=new node;
        temp=head;
        for(int i=0;i<=n;i++){

            if(n<len){
                    if(i==n){
                            temp=temp->next;
                            temp->data=x;
                    }
                    else{
                temp=temp->next;
            }}
        }
        }
//to reverse the entire linked list
    void reverse_(){
    node* curr=head;
    node *prev=NULL;
    node* follow=curr->next;
    while(curr!=NULL){
      curr->next=prev;
      prev=curr;
      curr=follow;
        if(follow){
            follow=follow->next;
        }
        head=prev;
    }
    }
//to resverse two nodes in linked list or to swap two nodes
    void reverseat(int n,int size_){
    node* temp=head;
    //temp=head;
    //node* curr=head;
    //node *prev=NULL;
    //node* follow=curr->next;
    for(int i=0;i<size_;i++){
          // temp=temp->next;
        //prev=curr;
        //curr=follow;
        //follow=curr->next;
        cout<<i;
        if(i==n){
                swap(temp->data,temp->next->data);
                temp=temp->next->next;
            //temp=prev;
            //prev=prev->next;
            //curr=curr->next;
            //follow=temp;
        }
        else{
            temp=temp->next;
    }

    }
    }
//to delete a node
void delete_node(int n,int size_){
node *temp=head;
node *temp1=new node;
for(int i=0;i<size_;i++){
        cout<<i;
    if(i==n){
            temp1=temp;
        temp=temp->next;
    temp1->next=temp;

    }
    else{
        temp=temp->next;
    }
}
}
};
//main function
int main(){
linkedlist a;
a.add_node(1);
a.add_node(2);
a.add_node(3);
a.add_node(4);
linkedlist b;
b.add_node(5);
b.add_node(6);
b.add_node(7);
b.add_node(8);
cout<<"a node before adding at position"<<endl;
a.display();
a.add_node_at(5,2,4);
cout<<" a node adding at position"<<endl;
a.display();
a.replace_at(7,1,5);
cout<<"a node is replaced"<<endl;
a.display();
a.reverse_();
cout<<" linked list is reversed"<<endl;
a.reverseat(1,5);
cout<<"after reversing a node in linked list"<<endl;
a.display();
a.delete_node(1,5);
cout<<"deleting a node"<<endl;
a.display();
return 0;
}
