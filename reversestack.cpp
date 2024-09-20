#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    stack<int> rt;
    stack<int> pt;
    while(st.size()>0){
       rt.push(st.top());
       st.pop();
    }
    while(rt.size()>0){
        pt.push(rt.top());
        rt.pop();
    }
    while(pt.size()>0){
        st.push(pt.top());
        pt.pop();
    }
    cout<<endl;
    print(st);
    return 0;
}    