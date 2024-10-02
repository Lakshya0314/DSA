#include<iostream>
#include<vector>
using namespace std;
class CircularQueue{
public:
    int f;
    int b;
    int s;
    int c;
    vector<int> arr;
    CircularQueue(int k){
        f=0;
        b=0;
        s=0;
        c=k;
        vector<int> v(k);
        arr = v;
    }
    void push(int val){
        if(s==c){
            cout<<"Overflow"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        if(b==c) b = 0;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Underflow"<<endl;
            return;
        }
        f++;
        if(f==c) f = 0;
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
        if(b==0) cout<<arr[c-1]<<endl;
        cout<<arr[b-1]<<endl;
    }
    void size(){
        cout<<s<<endl;
    }
    bool isempty(){
        if(s==0) return true;
        else return false;
    }
    bool isfull(){
        if(s==c) return true;
        else return false;
    }
    // void display(){
    //     if(s==0){
    //         cout<<"Underflow"<<endl;
    //         return;
    //     }
    //     for(int i=f;i<b;i++){
    //         if(i==c-1) i=0;
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }
};
int main(){
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.back();
    // q.display();
    q.pop();
    // q.display();
    q.push(60);
    q.back();
    // q.display();
    q.isfull();
    return 0;
}