
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node *head=NULL,*newnode,*prenode=NULL;

void createNode(int val){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
}

struct node* append(int val){
    createNode(val);
    if(head==NULL){
        head=newnode;
    }else{
        prenode->next=newnode;
    }
    prenode=newnode;
    return prenode;
}

void display(struct node* begin,struct node* end){
    for(struct node* i=begin;;i=i->next){
        if(i==end){
            cout << i->data << "\n";
            return;
        }
        cout << i->data << " ";
    }
}

void cycle(struct node* head){
    if(head==NULL){
        cout << "No cycle found\n" ;
        return;
    }
    struct node *slow=head,*fast=head->next;
    
    while(fast && fast->next){
        if(slow==fast){
            cout<<"Cycle Fount\n";
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast==NULL ){
        cout << "No cycle found\n" ;
        return;
    }
    
    slow=head;
    while(slow!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    cout<< "Cycle start from: "<< slow->data<<endl;
    
}

int main(){
    append(12);
    append(21);
    struct node* start=append(2);
    append(67);
    append(74);
    append(99);
    append(84);
    append(71);
    append(65);
    struct node* link=append(84);
    link->next=start;
    // display(start,link);
    cycle(head);
    return 0;
}