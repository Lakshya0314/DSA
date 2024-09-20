#include<iostream>
using namespace std;
class Node{   //user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{    //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size = 0;
    }
    void insertatTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertatHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtanyIndex(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Index"<<endl;
        }
        else if(idx==0)       insertatHead(val);
        else if(idx==size)    insertatTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
            temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
        
    }
    int GetIndex(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index ";
            return idx;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
        return temp->val;
        }
    }

    void DeleteatHead(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head=head->next;
        size--;
    }

    void DeleteatIndex(int idx){
        if(idx<0 || idx>size){
            cout<<"Invalid Index";
            return;
        }
        else if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx==0)  DeleteatHead();
        else if(idx==size-1){
            Node* temp = head;
            while(temp->next != tail){
                temp=temp->next;
            }
            temp->next = NULL;
            tail=temp; 
            size--;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    cout<<endl;
    }
};

int main(){
    LinkedList ll;  //{  }
    ll.insertatTail(10);  // {10->NULL}
    ll.display();
    ll.insertatTail(20);  // {10->20->NULL}
    ll.display();
    ll.insertatHead(5);   // {5->10->20->NULL}
    ll.display();
    ll.insertatHead(0);   // {0->5->10->20->NULL}
    ll.display();
    ll.insertAtanyIndex(3,15); // {0->5->10->15->20->NULL}
    ll.display();
    ll.insertAtanyIndex(5,25); // {0->5->10->15->20->25->NULL}
    ll.display();
    ll.DeleteatHead();
    ll.display();
    ll.DeleteatIndex(4);
    ll.display();
    ll.DeleteatIndex(2);
    ll.display();
    cout<<ll.GetIndex(-5)<<endl;
    cout<<ll.GetIndex(2)<<endl;
    cout<<ll.GetIndex(0)<<endl;
    return 0;
}