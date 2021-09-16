#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&st,int temp)
{
    if(st.size()==0)
    {
        st.push(temp);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
    return;
}
void reverse(stack<int>&st)
{
    if(st.size()==1)
    {
        return;
    }
    int temp=st.top();
    st.pop();
    reverse(st);
    insert(st,temp);
    return;
}
int main()
{
    int n;
    cin>>n;
     stack<int>st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    reverse(st);
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

