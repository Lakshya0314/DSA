#include<iostream>
using namespace std;
class Node{   
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n= 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    } 
    cout<<n<<endl;
}
void displayrec(Node* head){
    if(head==NULL){
        cout<<endl;
        return;
    }
    cout<<head->val<<" ";
    display(head->next);
}

void reversedisplayrec(Node* head){
    if(head==NULL) return;
    reversedisplayrec(head->next);
    cout<<head->val<<" ";
}

void insertatEnd(Node* head, int val){\
Node* t = new Node(val);
    while(head->next != NULL) head = head ->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    cout<<a->next->val<<endl;;
    cout<<a->next->next->next->val<<endl;
    Node* temp = a;
    display(a);
    display(b);
    size(a);
    displayrec(a);
    displayrec(c);
    reversedisplayrec(a);
    cout<<endl;
    insertatEnd(a,60);
    display(a);
    return 0;
}