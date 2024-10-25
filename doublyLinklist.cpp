#include <iostream>
using namespace std;

typedef struct Node {
    Node *pre;
    int data;
    Node *next;
} Node;

Node *head = nullptr, *tptr = nullptr, *tail = nullptr;

Node* NewNode(int val) {
    tail = new Node;
    tail->pre = nullptr;
    tail->data = val;
    tail->next = nullptr;
    return tail;
}

void enQ(int val) {
    Node *newNode = NewNode(val);
    if (head == nullptr) {
        head = newNode;
        tptr = head;
    } else {
        tptr->next = newNode;
        newNode->pre=tptr;
        tptr = tptr->next;
    }
}

void disp(string order="") {
    if (head == nullptr) {
        cout << "Queue is empty!" << endl;
    } else if(order.empty()){
        for (Node *i = head; i != nullptr; i = i->next) {
            cout << i->data << " ";
        }
        cout << "\n";
    } else if(order=="rev"){
        for (Node *i = tail; i != nullptr; i = i->pre) {
            cout << i->data << " ";
        }
        cout << "\n";
    }else{
        cout  << "Invalid order!" << endl;
    }
}

int main(){
    for(int i=0;i<10;i++){
        enQ(i);
    }
    disp();
    disp("rev");
    return 0;
}