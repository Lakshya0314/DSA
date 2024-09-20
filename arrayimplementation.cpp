#include<iostream>
using namespace std;
class Stack{
    public:
        int arr[5];
        int idx;
        Stack(){
            idx = -1;
        }
        void push(int val){
            if(idx==4){
                cout<<"Stack is full"<<endl;
                return;
            }
            idx++;
            arr[idx]=val;
        }
        void pop(){
            if(idx==-1){
                cout<<"Stack is empty"<<endl;
                return;
            }
            idx--;
        }
        int top(){
            if(idx==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[idx];
        }
        int size(){
            return idx + 1;
        }
};
int main()
{
    Stack st;
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.push(70);
    st.push(90);
    st.push(80);
    cout<<st.top()<<endl;
    return 0;
}