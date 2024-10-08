#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Overflow"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Underflow"<<endl;
            return;
        }
        f++;
        s--;
    }
    void front(){
        if(s==0){
            cout<<"Underflow";
            return;
        }
        cout<<arr[f]<<endl;
    }
    void back(){
        if(s==0){
            cout<<"Underflow"<<endl;
            return;
        }
        cout<<arr[b-1]<<endl;
    }
    void size(){
        cout<<s<<endl;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        if(s==0){
            cout<<"Underflow"<<endl;
            return;
        }
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.size();
    q.front();
    q.display();
    q.pop();
    q.back();
    q.display();
    return 0;
}