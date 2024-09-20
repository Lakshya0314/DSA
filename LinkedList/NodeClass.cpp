#include<iostream>
using namespace std;
class Node{   // LinkedList Node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    cout<<a.next<<endl;
    //forming LinkList
    a.next = &b;
    b.next = &c;
    c.next = &d;
    //a.next->val=50;                        //this is schanging b value witout using a
    cout<<(a.next)->val<<endl;                 //this is printing b value without using b
    cout<<(((a.next)->next)->next)->val;     //this is printing d value using a only
    cout<<endl;
    Node temp = a;
    while(1){                                //this is a loop to print value of all nodes
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
    return 0;
}