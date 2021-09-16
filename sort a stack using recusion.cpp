#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&st,int temp)
{
    if(st.size()==0 ||st.top()<=temp)
    {
        st.push(temp);
        return;
    }
    int val=st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
    return ;
}
void sort_st(stack<int>&st)
{
    if(st.size()==1)
    return;
    int temp=st.top();
    st.pop();
    sort_st(st);
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
  sort_st(st);
   while(st.empty()==false)
   {
       cout<<st.top()<<" ";
       st.pop();
   }
}
