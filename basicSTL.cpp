#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    cout<<st.size()<<endl;  //0
    cout<<st.empty()<<endl;  //1
    st.push(10);  //1
    st.push(20);  //2
    st.push(30);  //3
    st.push(40);  //4
    cout<<st.size()<<endl;  //4
    st.pop();  //3
    cout<<st.size()<<endl;  //3
    cout<<st.top()<<endl; //30
    cout<<st.empty()<<endl; //0 
    st.push(40);
    st.push(50);
    //printing stack in reverse order
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    //stack got empty after this
    //better way to do this is 
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    //current stack have elements in reverse order
    //getting elements back in stack
    while(temp.size()>0){
        cout<<temp.top()<<" ";   //printing elements in reverse order 
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
    return 0;
}